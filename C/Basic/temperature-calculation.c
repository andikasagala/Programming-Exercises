#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#          ---== Temperature Calculator ==---               #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/



int main()
{

//declare the variables
float Celcius_Input, Celcius_Result;
float Fahrenheit_Input, Fahrenheit_Result;
float Kelvin_Input, Kelvin_Result;
int The_User_Input;
int i=1;

while(i<5)
{

//print the statements
printf("\n\n\n\n");
printf(" --= Temperature Calculator =-- \n\n");
printf("1. Celcius to Fahreinheit\n");
printf("2. Celcius to Kelvin\n");
printf("3. Fahrenheit to Celcius\n");
printf("4. Fahrenheit to Kelvin\n");
printf("5. Kelvin to Celcius\n");
printf("6. Kelvin to Fahrenheit\n");
printf("7. Exit\n");
printf("Which calculation? 1/2/3/4/5/6/7:");
scanf("%d", &The_User_Input);

//define the user choice
switch(The_User_Input)
{
case 1:

//input the celcius value for user
printf("Input the Celcius value:");
scanf("%f",&Celcius_Input);

//Celcius to Fahrenheit formula and calculation
Celcius_Result=(Celcius_Input * 9/5) + 32;

//print the result
printf(" %0.2f Celcius is equal with %0.2f Fahrenheit!\n",Celcius_Input,Celcius_Result);

break;

case 2:

//input the celcius value for user
printf("Input the Celcius value:");
scanf("%f",&Celcius_Input);

//Celcius to Kelvin formula and calculation
Celcius_Result= Celcius_Input + 273.15;

//print the result
printf(" %0.2f Celcius is equal with %0.2f Kelvin!\n",Celcius_Input,Celcius_Result);


break;

case 3:

break;

case 4:

break;

case 5:

break;

case 6:

break;

case 7:

printf(" Bye!!!\n\n\n\n");
printf(" --= Temperature Calculation =--\n");
return 0;
break;

default:
printf("Out of choice. Please select: 1/2/3/4/5/6/7");
break;
}



}









return 0;
}
