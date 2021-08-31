/**
 * print_last_digit - prints to int
 * @n: receives integer value 
 *Description: prints absolute value
 * Return: 0
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int print_last_digit(int)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit= n % 10;
return (lastDigit);
}
