/**
 * print_last_digit(int n) - prints to int
 * Description: prints last digit
 *@n: the integer value it receives
 * Return: 0
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int print_last_digit(int n)
{
int lastDigit;
lastDigit= n % 10;
printf("%d",lastDigit);
return (lastDigit);
}
