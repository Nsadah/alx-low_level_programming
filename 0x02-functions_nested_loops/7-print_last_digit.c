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
if(int l < n)
{
l = n % 10;
printf("%d\n", l);
}
return (l);
}
