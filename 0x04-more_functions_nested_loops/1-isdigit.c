/**
* _isdigit - Entry point
* Description: prints numbers
*@c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
#include "main.h"
int _isdigit(int c)
{
/* refer int c*/
if (c >= 0 || c <= 9)
{
return (1);
}
return (0);
}
