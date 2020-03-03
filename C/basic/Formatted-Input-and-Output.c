#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#  ---== Formatted Input(scanf) and Output(printf) ==---    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
int a1,a2,a3,a4,a5;
float b1,b2,b3,b4,b5;
char c1,c2,c3,c4,c5;
char d1[555],d2[555],d3[555],d4[555],d5[555];

//user inputs
printf("Input any alphabet for \"Character  \" input ( c ) ie:A   :");
scanf("%c", &c1); // Character input
printf("Input any alphabets for \"Character String \" input ( s ) ie:banana   :");
scanf("%s", d1); // Character String input
printf("Input any number for \"Integer\" input ( i ) ie:1 :");
scanf("%i", &a1); //integer input
printf("Input any number for \"Decimal Integer\" input ( d ) ie:1 :");
scanf("%d", &a2); // decimal integer input
printf("Input any number for \"Octal Integer\" input ( o ) ie:11 :");
scanf("%o", &a3); // Octal integer input
printf("Input any number for \"Hexadecimal Integer\" input ( x ) ie:BAB1 :");
scanf("%x", &a4); // Hexadecimal integer input
printf("Input any number for \"Float Decimal\" input ( f ) ie:1.1 :");
scanf("%f", &b1); // Float Decimal input
printf("Input any number for \"Scientific notation Float \" input ( e ) ie:1111.11111111111   :");
scanf("%e", &b2); // Scientific notation input
printf("Input any number for \"Hexadecimal floating \" input ( a ) ie:1111.11111111111   :");
scanf("%a", &b3); // Hexadecimal floating input
printf("Input anything for \"Pointer address \" input ( p ) ie:hola123   :");
scanf("%p", d2); // Pointer address input


//clear the screen
system("clear");


//prints for the user output
printf("Integer ( i ) output value is %i \n",a1);
printf("Decimal Integer ( d ) output value is %d \n",a2);
printf("Octal Integer ( o ) output value is %o . And in decimal integer value is %d \n",a3,a3);
printf("Hexadecimal Integer ( x ) output value is %x . And in decimal integer value is %d \n",a4,a4);
printf("Float Decimal ( f ) output value is %f \n",b1);
printf("Scientific notation ( e ) output value is %e \n",b2);
printf("Hexadecimal floating ( a ) output value is %a \n",b3);
printf("Character String ( s ) output value is %s \n",d1);
printf("Character  ( c ) output value is %c \n",c1);
printf("Pointer address  ( p ) output value is %p \n",d2);

return 0;
}



