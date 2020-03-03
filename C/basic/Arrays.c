#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#  	      	  ---== Arrays I ==---			    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
int Arrays_Var1[5]={20,44,1,7,555};
int i,j;
char Arrays_Var2[5]={'A','Q','S','Z','X'};

printf("Arrays number version!\n");
printf("________________________ \n");
//looping for arrays in number
for(i=0;i<=4;i++)
{
printf("Array %d value is %d \n",i,Arrays_Var1[i]); //print the arrays value
}

printf("\n\n________________________ \n");
printf("Arrays Character version!\n");
printf("________________________ \n");


//looping for arrays in Character
for(j=0;j<=4;j++)
{
printf("Array %d value is %c \n",j,Arrays_Var2[j]); //print the arrays value
}




return 0;
}
