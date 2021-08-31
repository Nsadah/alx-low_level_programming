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
for (c = 'a'; c <= 'z'; c++)
{
/* refer int c*/
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
