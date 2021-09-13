/**
* _strchr - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* Description: Prints to string
*@s: the value it receives
*@c: the value it receives
* char *_strchr(char *s, char c)
* Return: Null if no char is located, else,
* return first occurance of character c is a string s
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
