/**
* _isdigit - Entry point
* Description: checks is a character is a digit
* @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
#include "main.h"
int _isdigit(int c)
{
int i;
for (i = 0; i <= 9; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
