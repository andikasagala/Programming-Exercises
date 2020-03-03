#include <stdlib.h>
#include <stdio.h>

/*
#############################################################
#                                                           #
#             ---== Data Types I Basic ==---                #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


int main ()
{

//declare variables

float Variable_A=0.1;
double Variable_B=0.1;
int Variable_C=1;
char Variable_D='A';
char Variable_E[]="Hello";
long int Variable_G = 12;
signed short int Variable_H = 1;
long long int Variable_I = 2;
unsigned int Variable_J = 1;

//print the output/values
printf("Data type 'FLOAT' with value: %f \n", Variable_A);
printf("Data type 'FLOAT' Double with value: %f \n", Variable_B);
printf("Data type 'INT' with value: %d \n", Variable_C);
printf("Data type 'CHAR' with value: %c \n", Variable_D);
printf("Data type 'CHAR' String with value: %s \n", Variable_E);
printf("Data type 'INT' Long with value: %d \n", Variable_G);
printf("Data type 'INT' Short with value: %d \n", Variable_H);
printf("Data type 'INT' long long with value: %d \n", Variable_I);
printf("Data type 'INT' unsigned with value: %d \n", Variable_J);
printf("Total Data Types: Integral (INT), Float (FLOAT), Character (CHAR), and Character String (CHAR)\n\n\n");
return 0;
}
