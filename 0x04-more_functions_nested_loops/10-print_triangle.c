/**
* print_triangle - Entry point
* Description: prints triangle
*@size: the integer value it receives
* Return: 1 if true. 0 if false.
*/
#include "main.h"
void print_triangle(int size)
{
int i, j, k;
for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
{
_putchar (' ');
}
for (k = 1; k <= j; k++)
{
_putchar ('*');
}
_putchar ('\n');
}
}
