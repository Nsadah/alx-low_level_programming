/**
* _isdigit - Entry point
* Description: prints alphabet
* @c: the integer value it receives
* Return: Always(success)
*/
#include "main.h"
int _isdigit(int c)
{
for (c = 0; c <= 9; c++)
{
/* refer int c*/
if (c >=0 || c <= 9)
{
return (1);
}
}
return (0);
}
