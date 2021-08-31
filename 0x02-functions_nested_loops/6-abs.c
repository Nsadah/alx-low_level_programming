/**
 * int _abs(int) - prints to int
 * Description: prints absolute value
 * Return: 0
 */
#include "main.h"
#include<stdio.h>
int _abs(int)
{
int n;
if (int n < 0)
{
n = (-1) * n;
_putchar (n);
}
_putchar ('\n');
return (0);
}
