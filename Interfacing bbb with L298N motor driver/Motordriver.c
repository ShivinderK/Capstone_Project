#include <stdio.h> // Standard Input Output Library
#include <iobb.h>  //GPIO Library 
int motor1 = 23; //Motor 1 Pin 
int motor2 = 41; //Motor 1 Pin
int port9 = 9;//Defining variable for port 9
int port8 = 8;//Defining variable for port 8
char motion; //Variable to take input

int main(void)  
{  
  iolib_init(); //initialize the iobb library  
  iolib_setdir(port9, motor1, DigitalOut);//setting the pin as Digital out
  iolib_setdir(port9, motor2, DigitalOut);//Setting the pin as Digital out

  while(1)  
  { 

    printf("Enter 0: Stop, 1: CW, 2: CCW:  ");//print message to the user
    motion = getchar();//Read one character input

    if(motion == '1') //if input is 1
    {
      printf("Motor in CW direction\n"); //print message to the user
      pin_high(port9, motor1);   //INA pin high
      pin_low(port9, motor2);  //INB pin low
    }

    else if(motion == '2') //if input is 2
    {
      printf("Motor in CCW direction\n");//print message to user 
      pin_low(port9, motor1);   //INA pin low
      pin_high(port9, motor2);  //INA pin high
    }

    else if(motion == '0') //if input is 0
    {
      printf("Motor Stopped\n"); //print message to user
      pin_low(port9, motor1);   //INA pin low
      pin_low(port9, motor2);  //INB pin low
    }

  }  
  iolib_free();  // Release all GPIOs to default status
  return(0);  
}  
