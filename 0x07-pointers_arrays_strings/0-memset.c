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
char *_memset(char *s, char b, unsigned int n)
{
memset(s, '\0', sizeof(s));
}
