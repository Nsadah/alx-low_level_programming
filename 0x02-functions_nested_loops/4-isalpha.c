/**
 * _isalpha - prints to string
 * Description: int _isaplha(int c) has a parameter 'c'
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
