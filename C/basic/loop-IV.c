#include <stdio.h>
#include <stdlib.h>

/*
#############################################################
#                                                           #
#          ---== Loop IV break and continue ==---	    #
#                                                           #
#                                                           #
#               Coder: Andika Sagala                        #
#               Date: March, 2020                           #
#############################################################
*/

int main()
{
//declare the variables
int i=0;

//looping with break and continue
for(i=0;i<10;i++)
{
if(i==8)
{
printf("Number 8! Finish! \n");
break;
}

if(i==2)
{
printf("Number 2 is skip! \n");
continue;
}
printf("%d \n", i);

}

return 0;
}
