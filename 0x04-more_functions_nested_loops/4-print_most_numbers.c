/**
 * print_numbers - prints to int
 * Description: Prints numbers 1 - 9
 * void print_numbers(void)
 */
#include "main.h"
void print_most_numbers(void)
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