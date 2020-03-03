#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#   ---== Arrays II Multidimensional Arrays Input ==---     #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
int i,j,k,l,m,n;
int Array_Number_Var[100][100];
int Array_Number_Post=0;

//clear the screen
system("clear");

//banner
printf("---== Multidimensional Arrays ==---\n\n\n");
printf("Mode: User input\n\n");

//user setting for the colomn and row count
printf("How many array's colomn?");
scanf("%d", &i);
printf("How many array's row?");
scanf("%d", &j);

//looping I
for(k=0;k<i;k++)
{
for(l=0;l<j;l++)
{
//user value input
printf("Input for the Array [%d][%d]", k,l);
scanf("%d" , &Array_Number_Var[k][l]);
}

}


//looping II
for(m=0;m<i;m++)
{
for(n=0;n<j;n++)
{
//print the value as the output
printf("Array #%d for the position [%d][%d] value is %d \n",Array_Number_Post+=1,m,n,Array_Number_Var[m][n] );
}

}






return 0;
}

