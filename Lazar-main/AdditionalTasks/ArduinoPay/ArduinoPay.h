#ifndef ARDUINOPAY_HEADER_H
#define ARDUINOPAY_HEADER_H

#include <LiquidCrystal.h>
#include <Keypad.h>
#include <SPI.h>
#include <MFRC522.h>

// Pins
#define BUTTON_PIN 2
#define KEYPAD_ROWS 4
#define KEYPAD_COLS 4
#define BUZZER_PIN 6
#define RFID_RST_PIN 5
#define RFID_SS_PIN 53

// LCD display setup
extern LiquidCrystal lcd;

// Keypad configuration
extern char keypadLayout[KEYPAD_ROWS][KEYPAD_COLS];
extern byte keypadRowPins[KEYPAD_ROWS];
extern byte keypadColPins[KEYPAD_COLS];
extern Keypad customKeypad;

// State enumeration
enum State 
{
  STATE_DISPLAY_WELCOME,
  STATE_AWAITING_AMOUNT_INPUT,
  STATE_AWAITING_CARD_TOUCH,
  STATE_ENTER_PIN,
  STATE_DISPLAY_CARD_ACCEPTED,
};

// State functions
void stateDisplayWelcome();
void stateAwaitingAmountInput();
void stateAwaitingCardTouch();
void stateEnterPIN();
void stateDisplayCardAccepted();

// Helper functions
void activateBuzzer(int duration);
void buttonInterrupt();
void handleButtonPress();
void handleNumericKey(char key);
void handleBackspace();
void handleAmountEntered();
void handlePinDigitEntered(char enteredPin[], int &pinDigitCount, char pressedKey);
void displayWrongPINMessage();

#endif
