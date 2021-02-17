# Capstone_Project
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


