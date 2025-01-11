#include "ArduinoPay.h"

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

char keypadLayout[KEYPAD_ROWS][KEYPAD_COLS] = 
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte keypadRowPins[KEYPAD_ROWS] = {A9, A8, A7, A6};
byte keypadColPins[KEYPAD_COLS] = {A5, A4, A3, A2};
Keypad customKeypad = Keypad(makeKeymap(keypadLayout), keypadRowPins, keypadColPins, KEYPAD_ROWS, KEYPAD_COLS);

MFRC522 rfidReader(RFID_SS_PIN, RFID_RST_PIN);

State currentState = STATE_DISPLAY_WELCOME;
unsigned long displayStartTime = 0;
const unsigned long displayDuration = 2000;
char enteredAmount[5];
int amountDigitCount = 0;
//bool cardAuthenticated = false;
volatile bool buttonPressed = false;

void setup() 
{
  // Initialize LCD display
  lcd.begin(16, 2);
  lcd.print("   DatecsPay"); 
  displayStartTime = millis(); // Record the current time for display timing
  Serial.begin(9600); // Initialize serial communication
  pinMode(BUZZER_PIN, OUTPUT); 
  // Initialize SPI communication and RFID reader
  SPI.begin();
  rfidReader.PCD_Init();
  Serial.println(F("Warning: this example overwrites the UID of your UID changeable card, use with care!"));

  // Set up the button pin as an input with pull-up resistor
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  // Attach the interrupt to the button pin, using the buttonInterrupt function
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), buttonInterrupt, FALLING);
}

void loop() 
{
  // State machine loop
  switch (currentState) 
  {
    case STATE_DISPLAY_WELCOME:
      stateDisplayWelcome();
      break;
    case STATE_AWAITING_AMOUNT_INPUT:
      stateAwaitingAmountInput();
      break;
    case STATE_AWAITING_CARD_TOUCH:
      stateAwaitingCardTouch();
      break;
    case STATE_ENTER_PIN:
      stateEnterPIN();
      break;
    case STATE_DISPLAY_CARD_ACCEPTED:
      stateDisplayCardAccepted();
      break;
  }
  // Check if the button was pressed
  if (buttonPressed) 
  {
    handleButtonPress();
  }
}

// State function: Display Welcome Screen
void stateDisplayWelcome() 
{
  if (millis() - displayStartTime >= displayDuration) 
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ENTER AMOUNT: ");
    
    currentState = STATE_AWAITING_AMOUNT_INPUT;
    amountDigitCount = 0;
    memset(enteredAmount, 0, sizeof(enteredAmount));// Clear the enteredAmount array by setting all its elements to 0
    
    activateBuzzer(1000);
  }
}

// State function: Awaiting Amount Input
void stateAwaitingAmountInput() 
{
  char pressedKey = customKeypad.getKey();
  if (pressedKey != NO_KEY) {                   // Check if a key was pressed (pressedKey is not equal to NO_KEY)
    if (pressedKey >= '0' && pressedKey <= '9') // Check if the pressed key is a numeric key ('0' to '9')
    {
      handleNumericKey(pressedKey);
    } 
    else if (pressedKey == '*') 
    {
      handleBackspace();// Delete last numeric key
    } 
    else if (pressedKey == '#') 
    {
      handleAmountEntered();
    }
  }
}

// State function: Awaiting Card Touch
void stateAwaitingCardTouch() 
{
  if (rfidReader.PICC_IsNewCardPresent() && rfidReader.PICC_ReadCardSerial()) // Check if a new RFID card is present and read its serial information
  {
    currentState = STATE_ENTER_PIN;
    //cardAuthenticated = true;
  }
}

// State function: Enter PIN
void stateEnterPIN() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ENTER PIN:");
  
  char enteredPin[5] = "";
  int pinDigitCount = 0;
  
  while (pinDigitCount < 4) 
  {
    char pressedKey = customKeypad.getKey();
    if (pressedKey >= '0' && pressedKey <= '9') 
    {
      handlePinDigitEntered(enteredPin, pinDigitCount, pressedKey);
    }
  }
  
  if (strcmp(enteredPin, "1111") == 0) 
  {
    currentState = STATE_DISPLAY_CARD_ACCEPTED;
  } 
  else 
  {
    displayWrongPINMessage();
  }
}

// State function: Display Card Accepted Screen
void stateDisplayCardAccepted() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PIN ACCEPTED");
  delay(2000);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PLEASE WAIT...");
  delay(2000);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("APPROVED");
  lcd.setCursor(0, 1);
  lcd.print("TRANSACTION");
  currentState = STATE_DISPLAY_WELCOME;
  displayStartTime = millis();
  //cardAuthenticated = false;
}

// Helper function: Activate Buzzer with specified duration
void activateBuzzer(int duration) 
{
  digitalWrite(BUZZER_PIN, HIGH);   
  delay(duration);                  
  digitalWrite(BUZZER_PIN, LOW);    
}

// Interrupt handler: Handle button press interrupt
void buttonInterrupt() 
{
  buttonPressed = true; // Set the flag to indicate button press
}

// Helper function: Handle button press
void handleButtonPress() 
{
  buttonPressed = false; 
  
  // Display "Transaction Canceled" message
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("CANCELED");
  lcd.setCursor(0, 1);
  lcd.print("TRANSACTION");
  delay(2000); 

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("TRY AGAIN");
  // lcd.setCursor(0, 1);
  // lcd.print("Again");

  delay(2000); 
  
  currentState = STATE_DISPLAY_WELCOME;   
  displayStartTime = millis(); // Reset display start time
}
// Helper function: Handle numeric key press
void handleNumericKey(char key) 
{
  activateBuzzer(50);
  
  if (amountDigitCount < 4) 
  {
    enteredAmount[amountDigitCount++] = key; // Add the key to entered amount
    
    lcd.setCursor(0, 1);
    lcd.print("$");
    lcd.print(enteredAmount);
    lcd.print("   ");
  }
}

// Helper function: Handle backspace key press
void handleBackspace() 
{
  if (amountDigitCount > 0) 
  {
    amountDigitCount--;                   
    enteredAmount[amountDigitCount] = '\0';
    
    lcd.setCursor(0, 1);
    lcd.print("$");
    lcd.print(enteredAmount);
    lcd.print("   ");
  }
}

// Helper function: Handle amount entry completion
void handleAmountEntered() 
{
  enteredAmount[amountDigitCount] = '\0';  // Null-terminate the entered amount
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PRESENT A CARD");
  lcd.setCursor(0, 1);
  lcd.print("AMOUNT: $");
  lcd.print(enteredAmount);
  
  currentState = STATE_AWAITING_CARD_TOUCH;  
}

// Helper function: Handle PIN digit entry
void handlePinDigitEntered(char enteredPin[], int &pinDigitCount, char pressedKey) 
{
  enteredPin[pinDigitCount++] = pressedKey; // Add the pressed key to entered PIN
  
  lcd.setCursor(pinDigitCount - 1, 1);
  lcd.print('*'); // Display '*' for each entered digit
}

// Helper function: Display "Wrong PIN" message
void displayWrongPINMessage() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WRONG PIN");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("TRY AGAIN");
  delay(2000);
  
  currentState = STATE_DISPLAY_WELCOME;
  displayStartTime = millis(); // Reset display start time
}