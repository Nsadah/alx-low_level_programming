/**
* print_square - Entry point
* Description: prints numbers
*@size: the integer value it receives
*/
#include "main.h"
void print_square(int size)
{
int i, w;
for (w = 1; w <= size; w++)
{
for (i = 1; i <= w; i++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
