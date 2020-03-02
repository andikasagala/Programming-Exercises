#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#          ---== Mathematics Calculator ==---               #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


//define all of the formulas in functions


int main()
{

//declare the variables
int i=1;
int User_Input;

while(i<5)
{

//print the statements
printf("\n\n\n\n--= Mathematics Calculator =--\n\n\n");
printf("Mathematics Lesson 1/2/3/4/5/6/7/8/9 :");
scanf("%d", &User_Input);

switch(User_Input)
{
case 1:
break;

case 2:
break;

case 3:
break;

case 4:
break;

default:
printf("Out of choice! 1/2/3/4/5/6/7/8/9");
break;
}



}

return 0;
}


//formulas calculation
