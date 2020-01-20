# sqube
LED Sound cube with arduino nano
Intro
This is my little foray into using the Arduino nano. I’m glad it didn’t take me 3 years of ownership before I started playing around with it. Anyways, thanks to the codes and projects from Najad at https://www.hackster.io/najad/reactive-sound-color-changing-cube-fdf705. He did a pretty cool sound cube and I wanted to duplicate for a project for some pre-teens so I decided to try it for myself. I used only 3 LEDs so I had to change the code accordingly. I changed the code so that in the future, changes to the number of LEDs would only require one area to change. My integrated circuit (IC) used for the addressable LEDs I had were also different and need to be changed in the code. Luckily, the FastLED library has taken all this into account and only requires that you alter that line in code. The project was done with a breadboard and jumpers, but when I’m happy with everything, then I plan to put on a PCB and put on display. 

Setup 
Before starting, I had to set up Arduino studio and 3d print a cube design.  
Print 3d container: Here’s the link to and existing STL design.
Parts
•	Breadboard for laying out the various components
•	Jumper cables for connecting between the components
•	Arduino nano w/ mini USB cable to program the nano
•	Microphone (3-pin) with built-in potentiometer to adjust sound sensitivity.
•	Addressable LED: I used an RGB model to vary the colors
•	Power supply with enough current and voltage to power up your LED strip. View the specs
Step 1: Plug nano into the breadboard making sure to straddle the rail in 2 columns with each leg in a different row. There are plenty of breadboard tutorials out there, but basically, the first two and last two columns are all connected down the line as seen in the picture. And each row across columns A-E share connection as well as the rows across F-J. However, the center rail between the two sets of columns are not connected. 
Step 2: Plug in microphone to breadboard with each pin in a different row of one column. See the image below.
Step 3: Use jumpers or solid core wires to connect to the following items on the breadboard 
Microphone 	  Arduino Nano	  LED
VCC	          5V	            5V
GND	          GND	            GND
OUT	          A5	
	            D5	            DATA

Step 4: Connect USB to computer and the nano.  It will likely be COM4 port.
Step 5: Open Arduino software for setup. Make sure you select the appropriate board and chipset. I set mine up as seen in the pictures below.
Step 6: Download and import FastLED.h library from http://fastled.io/. Store the ZIP file in your libraries folder and then import as seen in the image. 
Step 7: You’re immediately given empty void setup() and void loop () functions to populate.  Copy code to new file
Step 8: Change number of LEDs to a value that corresponds with your setup; Uncomment the line with the LED type you own and make sure the one not being used is commented.
Step 9: Compile and upload 
Step 10: Play sound, whistle or snap to test.
Optional:
Step 11: Solder your circuit and put into a box for long-term use

