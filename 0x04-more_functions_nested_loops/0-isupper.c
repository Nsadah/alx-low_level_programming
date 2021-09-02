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
int i;
for (i = 'A'; i <= 'Z'; c++)
{
if (c == i)
{
return (1);
}
else
{
return (0);
}
}
}
}
