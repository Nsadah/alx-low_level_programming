/**
 * print_most_numbers - prints to int
 * Description: Prints numbers 
 * void print_most_numbers(void)
 */
#include "main.h"
oid print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if(i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
