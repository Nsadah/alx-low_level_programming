/**
* print_last_digit - prints to int
* Description: prints last digit
*@n: the integer value it receives
* Return: l
*/
#include "main.h"
#include <stdio.h>
void times_table(void)
{
int i,j;	
for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
printf("%2d",(i*j));        
if(j%9 != 0 || j == 0)
{
printf(", ");
}
}
printf("\n");
}
}
