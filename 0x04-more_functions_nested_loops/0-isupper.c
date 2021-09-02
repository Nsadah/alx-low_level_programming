/**
* int _isupper - prints to int
* Description: prints alphabet
*@c: the integer value it receives
* Return: 0
*/
#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
for (c = 'A'; c <= 'Z'; c++)
{
for (c = 'a'; c <= 'z'; c++)
{
if (c >= 'A' || c <= 'Z')
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
