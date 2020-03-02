#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
# 		---== Number Limiter ==---       	    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{

//declare the variables
int Number_Var;
int i=1;
int User_Choice;

//looping forever
while(i<2)
{

//clear the screen
system("clear");

//print the user instructions
printf("1. Number mode\n");
printf("2. Exit\n");
scanf("%d", &User_Choice);

//define the user choice
switch(User_Choice)
{
case 1:
printf("Input any number (1 digit):");
scanf("%d", &Number_Var);

//define the condition of statement
//any number from 0 till 9 will be approved. else will be rejected( limited number )
if( (Number_Var>=0) && (Number_Var<=9) )
{
printf("The value is %d\n",Number_Var);
system("sleep 2");
}
else
{
printf("That was not a number nor out of 1 digit\n");
return 1;
}

break;


case 2:
printf("Good Bye!!!\n");
return 0;
break;

default:
printf("Out of choice!\n");
break;
}



}

return 0;
}
