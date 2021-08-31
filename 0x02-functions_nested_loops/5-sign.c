/**
 * print_sign - prints to int
 * Description: int c is a variable
 * Return: 1
 */
#include "main.h"
#include<ctype.h>
int print_sign(int n) /* c is a variable*/
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n ==0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('-1');
return (-1);
}
}
