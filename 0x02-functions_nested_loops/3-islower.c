/**
 * _islower - prints to string
 * int c - is a variable
 * Return: 1
 */
#include "main.h"
#include<ctype.h>
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
