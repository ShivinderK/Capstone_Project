_# Capstone_Project
Group Members: Shivinder Kaur (C0751078), Dawinder Kaur (C0765505), Manpreet Kaur (C0757604), Raghav Chopra (C0772292), Gopikrishnan K. Gopalkrishnan (C0753811)

Embedded Systems and design is one of the most growing industry and at a very fast pace. We as Embedded engineers always try to make something innovative and useful for end user as an embedded application. In semester 4 , we are challenged to showcase our skills which we have learnt in past 3 semesters into a reality.  We have learnt various skills such as Working with software platform i.e eclipse ide for C  and C++. In this semester we will do coding with these platform for our final project. The another software tool which we will use in this semester is cloud computing services such as AWS or Thingspeak. Apart from that, in subjects 3025 and 3014 we worked with arduino, beaglebone black for our class assignments. That gave us an exposure to interface between these components and all the requirement to work with these MCU's. While working in labs in semster 1 and 2 we worked with basics of electronics such as power measurement , voltage regulators , ADC and DAC’ And therefore we can use that experience to implement in our capstone project.

Our project "IOT based smart garage door opener" is the upgradation of the currently used garage door openers accessed through the web. In our project an alternate garage door access provision via a keypad and LCD screen is provided, along with that key security features like sending notifications via GSM Module, Use of IR Proximity sensors to prevent any accidents and the usage of a buzzer in case any obstacle comes in between and the door remains open more than a set time period. In addition to all of the upgradations we are storing the opening and closing timings of the garage door on the cloud which will enable to user to find out any security breach. 

Added features will always demand extra components. This is the list of all the hardware components and their use in our project:

1. Beaglebone black: The main MCU in our project, all the components in our project are connected directly or indirectly to the unit.
2. Arduino Uno: Act as slave MCU in our project,  Added to our project to provide an alternate garage door access via Keypad and LCD screen.
3. L298N Motor driver: Used to drive the DC motor and to control its direction of rotation.
4. DC 6V Gear Motor: Used to open and close the garage door.
5. Microswitches: To detect the opening and closing of the door.
6. ESP32 Wifi Module: To access Wifi, since Beaglebone Board doesnt have an inbuilt wifi module.
7. Logic Level controller: To change the voltage level from 5V to 3.3V and viceversa for supplying different components.
8. IR Sensor: To detect any obstacle when the garage door is closing.
9. Buzzer: To alert the user in case an obstacle is detected or the garage door remains open for more than set time.
10.Push Button: To acknowledge the Buzzor.
11.GSM Module: To notify the user about the door opening and closing.
12.Keypad Matrix: To enter password for garage opening and enable garage closing via a key.
13.LCD Display: To display user entered password via special character and to display messages to user.
14.Power Adapter: To provide supply to Beaglebone black.
15.16GB Sd Card: To flash latest image of debian.
16.LED Light assorted kit: To notify open/close status of the garage door.
17.PCB Board: To solder all the components together
18.Resistors: To limit the flow of current or divide voltage through the circuit.
19.Spark Fun Beginners kit: For using various capacitors, diodes and other components we may need in the project.  
20.Silicon Hookup wires: To connect sensors, buzzer and other components to the main unit.
HARDWARE TESTING OF COMPONENTS
Hardware testing of components plays a vital role in the overall success of the project. Testing of components is done via measuring, taking readings, performing operations on the hardware to check its performance for the desired outputs.
Hardware testing is usually more detailed and thorough than verification. Testing is needed to ensure that every component of a system is operating as it should, and that the system is performing exactly in accordance with the specific local requirements.
In our capstone following are the components which we have tested:
Arduino Uno Board: Arduino Uno is a microcontroller board based on the  ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM Outputs), 6 analog inputs, a 16MHZ quartz crystal , a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a a computer with a USB cable power it with a AC-to DC adapter or battery to get started.
IR Sensor:R Sensors are Infrared sensors. It uses the Infrared light to detect if there is any obstacle in between the area. It has IR led which will reflect the light and the component next to IR led is a Photodiode which will receive reflected light if there is any obstacle present. The blue nob is the Potentiometer  on IR sensor , which can be adjusted to select the range. There are two small indicators on the sensor ; one indicates the sensor is on and the other one will light up when the receiver photodiode will receive light from the obstacle.The IR sensor gives digital output only in the form of 0 and 1.
IR sensor 						Arduino
Ground 							Ground
VCC								5V
Output Pin						Digital Output Pin 2
Lcd display:In our Capstone project we are using LCD to display messages for user. We are using 20*4 LCD display. It is very important to test display before we implement it in our final project. For this we checked the clear visual of characters displayed on the screen. We checked special characters on the display as well. Interfacing of Arduino with LCD was done to conduct the testing.
LCD Display 						Arduino
Ground 							Ground
VCC								5V
SDA								A4
SCL								A5
Buzzer:
Buzzer ia a device which will produce signalling noise to alert user whenever the door remains open for long time. Also, whenever there is an obstacle in between the door while closing. We are using CLT1036 buzzer which requires 4-8 v DC supply to operate. We connected our buzzer directly to Arduino and tested its performance.
Buzzer	 						Arduino
Ground 							Ground
VCC								Pin 13
L298N motor driver
The L298N is a dual H- Bridge motor driver which allows speed and direction control of two dc motors at the same time. The module can drive the DC motor that have voltages between 5 and 35V, with a peak current up to 2A. In our project we will use only one port for Dc motor.
DC motor is rotary mechanism that will convert the direct current to a mechanical movement, in our case it will open and close the garage door.
L298N	 						          Arduino
Ground 							Ground
VCC								5V
Input V								Battery 12V					
	DC Motor 						L298N
   Terminal 1						Out 1
	Terminal 2						Out 2
  GSM Module
  GSM module is used to send SMS to user in particular situations. It will be interfaced with Arduino Uno. The testing was done via connecting GSM Module to Arduino Uno
  



								













