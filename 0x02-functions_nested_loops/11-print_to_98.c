/**
 * print_to_98 - prints to int
 * Description: Prints alphabet in lowercase
 *@n: the integer value it receives
 * void print_to_98(int n)
 */
#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
