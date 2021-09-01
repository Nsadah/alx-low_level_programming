/**
 * print_last_digit - prints to int
 * Description: prints last digit
 *@n: the integer value it receives
 * Return: l
 */
#include "main.h"
#include <stdio.h>
int print_last_digit(int n)
{
int l; 
for(l = 0; l < n; l++)
{
 l = n % 10;
_putchar('0' + l);
}
return (l);
}
