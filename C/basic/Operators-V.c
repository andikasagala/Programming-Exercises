#include <stdlib.h>
#include <stdio.h>

/*
#############################################################
#                                                           #
#         ---== Operators V Bitwise ==---                   #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


int main ()
{

//declare the variables
int a=1;
int b=1;
int c;

//print the statements
printf("====================== \n");
printf("Variable a value is %d \n", a);
printf("Variable b value is %d \n", b);
printf("====================== \n");

printf("______________________________________\n");


//condition of statements and print the results
if(~c)
{
c=a+b;
printf("true \n");
printf("Operators Bitwise ( ~ ) c value is %d \n", c);
}
else
{
printf("false\n");
}
printf("______________________________________\n");


if(a & b==2)
{

printf("true \n");
printf("Operators Bitwise ( & ) a value = %d and b value = %d \n", a,b);
}
else
{
printf("false\n");
printf("Operators Bitwise ( & ) a value = 1 and b value = 1 \n");
}

printf("______________________________________\n");
if( a==10 | b )
{

printf("true \n");
printf("Operators Bitwise ( | ) a value = %d or b value = %d \n", a,b);
}
else
{
printf("false\n");
}

printf("______________________________________\n");




printf("______________________________________\n");
if( a ^ b )
{

printf("true \n");
printf("Operators Bitwise ( ^ ) a value = %d ^ b value = %d \n", a,b);
}
else
{
printf("false\n");
}

printf("______________________________________\n");


printf("______________________________________\n");
if( a >>= b )
{

printf("true \n");
printf("Operators Bitwise ( a >>= ) a value = %d a >>= b value = %d \n", a,b);
}
else
{
printf("false\n");
}

printf("______________________________________\n");


printf("______________________________________\n");
if( a <<= b )
{

printf("true \n");
printf("Operators Bitwise ( <<= ) a value = %d <<= b value = %d \n", a,b);
}
else
{
printf("false \n");
}

printf("______________________________________\n");





return 0;
}
