/**
 * _isalpha - prints to string
 * Description: 'c' - is a parameter of int _isaplha(int c)
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
