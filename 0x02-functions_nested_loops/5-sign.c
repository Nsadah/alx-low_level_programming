/**
 * print_sign - prints to int
 * Description: int n is a variable
 *@n: the integer value it receives
 * Return: 1
 */
#include "main.h"
#include<ctype.h>
int print_sign(int n)
{
  /* refer int n*/
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
