/**
* int _isupper - prints to int
* Description: prints alphabet
*@i: the integer value it receives
* Return: 0
*/
#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
for (c = 'A'; c <= 'Z'; c++)
{
if (c >= 'A' || c <= 'Z')
{
_putchar (c);
return (1);
}
else
{
return (0);
}
}
}
