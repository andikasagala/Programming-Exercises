#include <stdlib.h>
#include <stdio.h>

/*
#############################################################
#                                                           #
#      	---== Variable VI Calculation Result ==---          #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


int main ()
{

//declare the variables
float const Pi=3.14;
float Circle_Result;
float r_Value=7;

//calculation of formula: π x r x r
Circle_Result=Pi*r_Value*r_Value;

//print the result of calculation
printf("The circle result is ( π x r x r): %f \n", Circle_Result);

return 0;
}
