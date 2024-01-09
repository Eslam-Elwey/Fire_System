# Fire_System
There Are 3 States 
1. Fine Mode (When Temperature is less than 50 c)
2. Heat Mode (When Temperature is Higher than 50 c)
3. Fire State (when Smoke Percentage is over 50 %)

In Heat Mode : Indication Yellow Led
In Fire Mode : Indication Red Led / Motor (Water Pump) / Buzzer Are on

Both Fine & Heat states Are Reversible but Heat is Irrversible

Using MCU ATMEGA32
(DC_Motor / Leds / Keypad / LCD / LM35 / MPX41115 / Buzzer / Relay)
Interface With 
HAL : KEYPAD / LCD / Sensors
MCAL : DIO / ADC / EEPROM
APP: Fire System
