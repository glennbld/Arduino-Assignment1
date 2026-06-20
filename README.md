Arduino Assignment 1 — Arduino Fundamentals

This is my submission for Assignment 1 in the Programming C++ for Engineers Using Arduino course.

Tasks

Task 1 — Hello, Serial!

Created variables of different data types and printed them to the Serial Monitor using Serial.print and Serial.println.

Task 2 — Blink Using Variables

Used variables to control the LED blink speed and pin number. Changed onTime and offTime to see different blink patterns.

Task 3 — Make It a Function

Moved the blinking logic into a custom function called blinkOnce() that takes parameters for on time and off time. Also wrote a blinkTwice() function.

Task 4 — Count Down with a while Loop

Used a while loop to count down from 10 to 0 in steps of 2, printing each number to the Serial Monitor. After the countdown the LED flashes 3 times using a second while loop.

Task 5 — Smart Countdown (Main Submission)

Combined everything — variables, a custom function, a while loop, the LED, and the Serial Monitor — into one program. Counts down from 5 to 1, printing each number and blinking the LED that many times per step using flashLED(). Ends with the LED staying on for 5 seconds.

Concepts demonstrated


Variables and data types — int, float, bool, String
Defining and calling custom functions with parameters
The while loop and how to avoid infinite loops
Digital output using digitalWrite and pinMode
Serial communication using Serial.begin, Serial.print, Serial.println


How to run Task 5


Open Task5_SmartCountdown.ino in the Arduino IDE
Connect your Arduino Uno to your computer via USB
Go to Tools > Board > Arduino Uno
Go to Tools > Port and select the correct port
Click Upload
Open Tools > Serial Monitor and set baud rate to 9600
Watch the countdown on screen and the LED blinking on the board


Author

Brian Glenn Dablaka
Index Number: 2526401725
Group: B
Course: Programming C++ for Engineers Using Arduino
