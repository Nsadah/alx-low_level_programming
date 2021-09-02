/**
* more_numbers - Entry point
* Description: Prints numbers
* void more_numbers(void)
*/
#include "main.h"
void more_numbers(void)
{
int n;
int l;
for (l = 1; l <= 10; l++)
{
for (n = 0; n <= 14; n++)
{
_putchar ('0' + n);
}
_putchar ('\n');
}
}
