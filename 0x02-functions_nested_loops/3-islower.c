/**
 * _islower - prints to string
 * Description: chekcs for lower case
 * @ c: integer value received
 * Return: 1
 */
#include "main.h"
#include<ctype.h>
int _islower(int c) /* c is a variable*/
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
