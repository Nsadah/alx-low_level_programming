/**
* int _isdigit - Entry point
* Description: prints alphabet
*@c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
#include "main.h"
int _isdigit(int c)
{
int i = 0;
for (i = 0; i <= 9'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
