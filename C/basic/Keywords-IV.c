#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#    ---== Keywords IV void,double,for,goto,const ==---     #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/


//sample how to use void
void The_Void()
{

}


//sample how to use void
int main(void)
{
int i=1;
//sample how to use double
double One_Loop=1.1;
//sample how to use keywords of const
const float PI=3.14;


printf("Fixed value of PI is %f \nLooping version %f\n",PI,One_Loop);
Hey_Back:
//sample how to use keywords of for
for(i=0;i<10;i++)
{
printf("%d\n",i);
if(i==7)
{
printf("I'm skipping the rest!!! and back for looping!\n");
//sample how to use keywords of goto
goto Hey_Back;
}
}



return 0;
}
