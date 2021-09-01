/**
 * print_last_digit(int n) - prints to int
 * Description: prints last digit
 *@n: the integer value it receives
 * Return: lastDigit
 */
#include "main.h"
#include <stdio.h>
int print_last_digit(int n)
{
int c = n % 10;
_putchar(c);
return (c);
}
