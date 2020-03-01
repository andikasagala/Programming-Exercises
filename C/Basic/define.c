#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14


/*
#############################################################
#                                                           #
#                    ---== Define ==---                     #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/



int main()
{
int r_Value=3;
float Circle_Result;

Circle_Result=Pi * r_Value * r_Value;

printf("This is define with #define Pi 3.14 \nCircle Value ( formula: π x r x r) is %0.3f \n", Circle_Result);
    
 return 0;   
}
