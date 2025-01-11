## Transaction System Documentation

### Introduction:

The Transaction System is an Arduino-based application that emulates a fundamental transaction process. This system integrates various hardware components, including a LiquidCrystal display, a keypad, an MFRC522 RFID reader, and an audio feedback mechanism through a buzzer. Its purpose is to simulate a simplified transaction flow, encompassing amount entry, card authentication, PIN verification, and transaction completion.

### Components:

- **LiquidCrystal Display**: A 16x2 character LCD screen used to relay information and instructions to the user.
- **Keypad**: A 4x4 matrix keypad for user input, facilitating amount entry and interaction with the system.
- **MFRC522 RFID Reader**: A RFID reader used to detect and authenticate RFID cards.
- **Buzzer**: An audio feedback device generating sound cues to indicate specific system states.

### Pins to Connect:

- **MEGA2560R3 Microcontroller Board**

**LiquidCrystal Display:**
- LCD RS pin to Arduino pin - 7
- LCD En pin to Arduino pin - 8
- LCD D4 pin to Arduino pin - 9
- LCD D5 pin to Arduino pin - 10
- LCD D6 pin to Arduino pin - 11
- LCD D7 pin to Arduino pin - 12

**Keypad:**
- Keypad Rows to Arduino pins - A9, A8, A7, A6
- Keypad Columns to Arduino pins - A5, A4, A3, A2

**Buzzer:**
- Buzzer pin to Arduino pin - 6

**MFRC522 RFID Reader:**
- RFID RST pin to Arduino pin - 5
- RFID SS pin to Arduino pin - 53

Please make sure to connect the hardware components to the specified pins according to this list to ensure proper functionality of the Transaction System.

### States:

The Transaction System operates as a state machine, transitioning through distinct phases of the transaction process. The states are defined as follows:

1. **STATE_DISPLAY_WELCOME:**       Displays a welcoming message, prompting the user to input the transaction amount.
2. **STATE_AWAITING_AMOUNT_INPUT:** Awaits user input for the transaction amount.
3. **STATE_AWAITING_CARD_TOUCH:**   Awaits card presentation for authentication.
4. **STATE_ENTER_PIN:**             Prompts the user to input a Personal Identification Number (PIN).
5. **STATE_DISPLAY_CARD_ACCEPTED:** Displays a success message upon successful PIN entry and transaction completion.

### Usage:

1. The system initiates by displaying a friendly message, requesting the user to input the desired transaction amount.
2. The user employs the keypad to input the transaction amount, which is showcased on the LCD.
3. Corrective action is possible through the '*' key, enabling the removal of the last digit.
4. The '#' key confirms the entered amount and triggers a request for card authentication.
5. The system awaits the presentation of an RFID card for further validation.
6. Subsequent to card presentation, the user is prompted to input a secure PIN.
7. Upon PIN entry, the system verifies the correctness of the entered PIN.
8. A valid PIN prompts the display of a transaction success message, followed by simulation.
9. An invalid PIN results in an error message, granting the user another attempt.
10. The system returns to the initial state, prepared for a new transaction.
