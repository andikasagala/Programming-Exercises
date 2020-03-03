#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#      ---== Arrays II Multidimensional Arrays ==---        #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
int Arrays_Var1[2][3]={{4,7,3},{2,8,3}};
int i,j,k=-1,l,m,n=-1;
char Arrays_Var2[2][3]={{'P','O','I'},{'Q','A','Z'}};

printf("\n\n---== Multidimensional Arrays in number ==---\n\n");
printf("\n_____________________________________________________ \n\n");
//looping for arrays in number version
printf("_______________");
printf("\n\nData: {{4,7,3},{2,8,3}} \n");
printf("_______________\n");
for(i=0;i<=1;i++)
{
for(j=0;j<=2;j++)
{
k+=1; //increment for numbering the arrays
printf("Array %d value is %d\n",k,Arrays_Var1[i][j]); //print the array value
}
}

printf("\n\n\n_____________________________________________________ \n");
printf("\n\n---== Multidimensional Arrays in char ==---\n\n");
printf("\n_____________________________________________________ \n\n");
//looping for arrays in char version
printf("_______________");
printf("\n\nData: {{'P','O','I'},{'Q','A','Z'}} \n");
printf("_______________\n");
for(l=0;l<=1;l++)
{
for(m=0;m<=2;m++)
{
n+=1; //increment for char the arrays
printf("Array %d value is %c\n",n,Arrays_Var2[l][m]); //print the array value
}
}






return 0;
}
