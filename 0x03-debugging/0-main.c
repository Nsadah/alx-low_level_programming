/**
 * print_sign - prints to int
 * Description: int n is a variable
 *@n: the integer value it receives
 * Return: 1
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints to string
 * Description: Prints positive, negative or zero
 * Return: 0
 */
int main(void)
{
int i;

/* your code goes there */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return (0);
}
