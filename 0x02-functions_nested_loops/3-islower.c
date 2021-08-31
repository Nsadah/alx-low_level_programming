/**
* _islower - this is a name followed by a parameter 'c'
* Description: Prints alphabet in lowercase
* Return: 1 (Success)
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
