#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
# 	---== Loop VI The comma operator ==---	 	    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
int i,j=10,sum;

//looping using for
for(i=0;i<2;i++,j--)
{
sum=i+j;
printf("The total result is %d \n", sum);
}
printf("_______________________________ \n");
//looping using for
for(i=0;i<2;i++,j--)
{
sum+=i+j;
printf("The total result is %d \n", sum);
}



return 0;
}
