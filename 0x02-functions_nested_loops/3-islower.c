/**
* _islower - prints to string
* Description: Prints alphabet in lowercase || c is a variable
* Return: 1 (Success)
*/
#include "main.h"
#include<ctype.h>
int _islower(int c) /* this is a name followed by a parameter 'c' */
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
