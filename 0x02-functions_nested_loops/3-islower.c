/**
* _islower - prints to string
* Description: Prints alphabet in lowercase
* int _islower(int c)
* Description: int c is a variable in the function
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
