#include <stdlib.h>
#include <stdio.h>

/*
#############################################################
#                                                           #
#         ---== Operators I Arithmetic ==---                #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


int main ()
{
int ArithmeticAdditionVar1=1;
int ArithmeticAdditionVar2=1;
int ArithmeticAdditionVarResult;

int ArithmeticSubtractionVar1=10;
int ArithmeticSubtractionVar2=3;
int ArithmeticSubtractionVarResult;

int ArithmeticMultiplicationVar1=2;
int ArithmeticMultiplicationVar2=4;
int ArithmeticMultiplicationVarResult;

int ArithmeticDivisionVar1=8;
int ArithmeticDivisionVar2=4;
int ArithmeticDivisionVarResult;

int ArithmeticModuleOperatorVar1=16;
int ArithmeticModuleOperatorVar2=3;
int ArithmeticModuleOperatorVarResult;

ArithmeticAdditionVarResult= ArithmeticAdditionVar1 + ArithmeticAdditionVar2;
ArithmeticSubtractionVarResult= ArithmeticSubtractionVar1 - ArithmeticSubtractionVar2;
ArithmeticMultiplicationVarResult= ArithmeticMultiplicationVar1 * ArithmeticMultiplicationVar2;
ArithmeticDivisionVarResult= ArithmeticDivisionVar1 / ArithmeticDivisionVar2;
ArithmeticModuleOperatorVarResult= ArithmeticModuleOperatorVar1 % ArithmeticModuleOperatorVar2;

printf("Operator Arithmetic Addition ( + ) with result value: %d \n" , ArithmeticAdditionVarResult);
printf("Operator Arithmetic Subtraction ( - ) with result value: %d \n" , ArithmeticSubtractionVarResult);
printf("Operator Arithmetic Multiplication ( * ) with result value: %d \n" , ArithmeticMultiplicationVarResult);
printf("Operator Arithmetic Division ( / ) with result value: %d \n" , ArithmeticDivisionVarResult);
printf("Operator Arithmetic Module Operator ( % ) with result value: %d \n" , ArithmeticModuleOperatorVarResult);





return 0;   
}
