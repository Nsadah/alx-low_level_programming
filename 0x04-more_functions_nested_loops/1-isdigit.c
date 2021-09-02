
#include "main.h"
/**
 * _isdigit - Entry point
 * Description: checks is a character lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _isdigit(int c)
{
int i;
for (i = 0; i <= 9; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
