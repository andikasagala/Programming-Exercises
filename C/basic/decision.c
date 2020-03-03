#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#          ---== Decision I Boolean Variables ==---         #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
const int true=1; //boolean true with value 1
const int false=0; //boolean flase with value 0
int User_Input;
int User_Result;

//user input
printf("Input number within range 1 to 10 :");
scanf("%d", &User_Input);

//define the user input range of limit
if(User_Input>=1 && User_Input<=10)
{
User_Result=true;
}

else
{
User_Result=false;
}


//setting the decision true or false by value 0 and 1
switch(User_Result)
{
case 0:
printf("false \n");
break;

case 1:
printf("true \n");
break;

default:
printf("none!\n");
break;
}


return 0;
}

