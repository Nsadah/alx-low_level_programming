/**
 * _isalpha - prints to string
 * Description: int c is a variable
 * Return: 1
 */
#include "main.h"
#include<ctype.h>
int _isalpha(int c) /* c is a variable*/
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
