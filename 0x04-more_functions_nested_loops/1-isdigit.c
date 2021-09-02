/**
* int _isdigit - prints to int
* Description: prints alphabet
*@c: the integer value it receives
* Return: 0
*/
#include "main.h"
#include <stdio.h>
int _isdigit(int c)
{
for (c = 0; c <= 9; c++)
{
if (c >= 0)
{
_putchar (c);
return (1);
}
else
{
_putchar(c);
return (0);
}
}
}
_putchar('\n');
}
