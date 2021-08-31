/**
* islower - prints to string
* Description: Prints alphabet in lowercase
* int _islower(int c)
* Return: 1 (Success)
*Return: 0 (Failure)
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
