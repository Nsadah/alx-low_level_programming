/**
* _isupper - Entry point
* Description: prints alphabet
*@c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
#include "main.h"
int _isupper(int c)
{
int i = 'A';
for (i = 'A'; i <= 'Z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
