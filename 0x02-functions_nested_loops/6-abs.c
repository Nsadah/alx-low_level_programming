/**
 * _abs - prints to int
 * Description: prints absolute value
 *@n: the integer value it receives
 * Return: 0
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _abs(int N)
{
N = N * (-1);
if(N < 0 || N > 0)
{
putchar(N);
}
else
{
printf("\n");
}
return (0);
}
