/**
 * int _abs(int) - prints to int
 * Description: prints absolute value
 * Return: 0
 */
#include "main.h"
#include<stdio.h>
int main(void)
{
int n;
if (n < 0)
{
n = (-1) * n;
_putchar (n);
}
_putchar ('\n');
return (0);
}
