/**
 * print_numbers - prints to int
 * Description: Prints numbers 1 - 9
 * void print_numbers(void)
 */
#include "main.h"
void print_numbers(void)
{
char i;
for (i = 0; i <= 9; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
