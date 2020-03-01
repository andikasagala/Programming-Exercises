#include <stdlib.h>
#include <stdio.h>

/*
#############################################################
#                                                           #
#         ---== Operators III Logical ==---                  #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


int main ()
{
int VariableA=1;
int VariableB=2;
  
printf("___________________\n");
printf("Operators Logical!!!\n");
printf("Variable A value is: 1 \n");
printf("Variable B value is: 2 \n");
printf("====================\n");
if( (VariableA==1) && (VariableB==2))
{
    printf ("True\n");
    printf("Operators Logical ( && ). VariableA=1 && Variable=2 \n");
    printf("______________________________________________________\n");

}
else
    {
        printf("False\n");
        printf("Operators Logical ( && ). is not VariableA=1 && Variable=2 \n");
        printf("______________________________________________________\n");
    }
    

if( (VariableA==7) || (VariableB==2))
{
    printf ("True\n");
    printf("Operators Logical ( || ). VariableA=7 || Variable=2 \n");
    printf("______________________________________________________\n");

}
else
    {
        printf("False\n");
        printf("Operators Logical ( || ). is not VariableA=7 || Variable=2 \n");
        printf("______________________________________________________\n");
    }
    

    

if( !(VariableA==2))
{
    printf ("True\n");
    printf("Operators Logical ( ! ). ! VariableA=1 Because the value of Variable A right now is 2  \n");
    printf("______________________________________________________\n");

}
else
    {
        printf("False\n");
        printf("Operators Logical .  VariableA=1 \n");
        printf("______________________________________________________\n");
    }
    

    
    
     
    
return 0;   
}
