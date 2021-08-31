/**
 * _abs - prints to int
 * Description: prints absolute value
 *@n: the integer value it receives
 * Return: 0
 */
#include "main.h"

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
}
_putchar (n);
}
_putchar ('\n');
return (0);
}
