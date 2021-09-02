/**
* _isdigit - Entry point
* Description: prints alphabet
* @c: the integer value it receives
* int _isdigit(int c)
*/
#include "main.h"
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
