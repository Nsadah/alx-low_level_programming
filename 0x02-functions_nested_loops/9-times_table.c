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
int a,b;  	
for (a = 0 ; a <= 9; a++ ) 
{		
for (b = 0 ; b <=9; b++ )
printf("%d, " , a * b);						
printf("\n");			
}
return 0;
}
