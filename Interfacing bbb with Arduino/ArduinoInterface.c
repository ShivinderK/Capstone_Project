#include <stdio.h> //Standard C input Output Library
#include <unistd.h> //To use functions like File Opening, Closing, sleep etc.
#include <termios.h> // For Seeting up UART communication
#include <fcntl.h> // File control functions like O_RDWR, O_NONBLOCK etc.
#include <string.h> //For String Operations

 int main ()
{
    char inArray[100]; // declare a char array for receiving data
    char outArray[100]; // A  char array to store and send data

    int file = open("/dev/ttyO4", O_RDWR |  O_NONBLOCK);// Open file in Read Write & Non Blocking Mode
    if (file > 0){ 
       printf("Started UART communication\n"); 
    }
    else{	
        printf("Some Error Occured\n"); 
        return 0;// Stop the code
	}

    struct termios uartsetting;
    uartsetting.c_cflag = B9600 | CS8 | CREAD; //Set Baudrate, Byte size and Reading enabled
    uartsetting.c_lflag = ICANON; //Canonical Mode- Input is available line by line
    tcsetattr(file,TCSANOW,&uartsetting);  //Apply the setting to UART
    tcflush(file, TCIOFLUSH); //Flush all Input and Output Data

    while(1) // An Infinite Loop
    {
        outArray[0] = '\0';
        strcpy(outArray, "Send Some Message\n"); // Copy a string in char array
        write(file, outArray, strlen(outArray)); // Sending message
        printf("Data Sent \n");

        sleep(1);

    	int inputNum = read(file,&inArray,100); // Read the input Message
    	if(inputNum > 0)
    	{
    		for(int i=0; i < inputNum; i++)
    		{
    			printf("%c",inArray[i]); //print input message byte by byte
    		}
    		printf("\n");
            sleep(1);
    	}
	}
    close(file); //Close the f1 at last
}