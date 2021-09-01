/**
* print_last_digit - prints to int
* Description: prints last digit
*@n: the integer value it receives
* Return: l
*/
#include "main.h"
#include <stdio.h>
int print_last_digit (int n)
{
int l; 
l = n % 10;
if (n < 0)
{
  l = l * -1;
}
_putchar (l + '0');
return (l);
}
