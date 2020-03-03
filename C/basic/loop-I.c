#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
# 		---== Loop I for ==---   		    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variable
int i=0;
int j=10;

//looping using for
printf("This is looping increment!\n");
for(i=0;i<10;i++)
{
printf("%d \n",i);
}

//looping using for
printf("This is looping decrement!\n");
for(j=10;j>=0;j--)
{
printf("%d \n",j);
}


return 0;
}
