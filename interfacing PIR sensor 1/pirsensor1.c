#include <stdio.h>   //includes standard I/O header files
#include <iobb.h>     //includes GPIO I/O header files
#include <unistd.h>  //includes POSIX API library for adding delay in operation

#define IRoccupancy 8,8  // PIR sensor connected to pin 8 of header P8
#define LEDpin 8,12     //LED is connected to pin 12 of header P8

int main(void)        // main function
{
  iolib_init();     // initializing GPIO I/O library
  iolib_setdir(IRoccupancy, DigitalIn);   //setting GPIO pin for output
  iolib_setdir(LEDpin, DigitalOut);
  
  while(1)  //continuous loop
  {
    if (is_high(IRoccupancy))  //if pin 8 of header is low
    {
      printf("Garage is Unoccupied \n");  //print on terminal
      pin_low(LEDpin);  //LED will not glow
      usleep(1200000);  //delay operation
    }
    if (is_low(IRoccupancy))  // if pin 8 of header is high
    {
      printf("Garage is Occupied \n");
      pin_high(LEDpin);  //LED will glow
      usleep(1200000);
    }
  }
iolib_free();   //end of program (freed library resources)
return(0);   //return a value
}
