/**
 * print_last_digit - prints to int
 * Description: prints last digit
 *@n: the integer value it receives
 * Return: lastDigit
 */
#include "main.h"
#include <stdio.h>
int print_last_digit(int n)
{
int l = n % 10;
_putchar('0' + l);
return (0);
}
