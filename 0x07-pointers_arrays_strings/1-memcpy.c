/**
* _memset - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* Description: Prints to string
*@s: the value it receives
*@b: the value it receives
*@n: the value it receives
* char *_memset(char *s, char b, unsigned int n)
* Returns a pointer to the memory area s
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
