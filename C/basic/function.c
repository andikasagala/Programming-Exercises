#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
# 		---== Function ==---			    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

//declare the function
double Circle_Area(float r_Value);


int main()
{
//declare the variables
float User_Value;
int i=0;
double User_Result;

//looping forever
while(i<2)
{

printf("Input the \'r\' value of the circle:");
scanf("%f", &User_Value);
User_Result=Circle_Area(User_Value);
printf("The Circle Area value is %0.2f \n",User_Result);
}


return 0;
}


//proccesing and calculation of Circle_Area function
double Circle_Area(float r_Value)
{
//declare the variables
const float PI=3.14; //fixed value using const
double Circle_Result;

//calculation with Circle Area formula
Circle_Result=PI * r_Value * r_Value;

return Circle_Result;


}
