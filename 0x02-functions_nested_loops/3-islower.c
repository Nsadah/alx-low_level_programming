/**
* _islower - prints to string
* Description: Prints alphabet in lowercase
* int _islower(int c) where 'c' is an integer value
* 'c' is an integer value
* Return: 1 (Success)
*/
#include "main.h"
#include<ctype.h>
int _islower(int c)  /* c is an integer value */
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
