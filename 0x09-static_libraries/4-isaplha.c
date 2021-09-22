#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * Description: checks is a character lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _isalpha(int c)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
for (i = 'A'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
}
return (0);
}
