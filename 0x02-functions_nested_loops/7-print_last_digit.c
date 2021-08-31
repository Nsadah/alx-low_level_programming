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
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit= n % 10;
return (lastDigit);
}
