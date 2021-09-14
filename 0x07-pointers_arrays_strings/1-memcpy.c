/**
* _strchr - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* Description: Prints to string
*@dest: the value it receives
*@src: the value it receives
*@n: the value it receives
* char *_memcpy(char *dest, char *src, unsigned int n)
* Return: dest
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
strcpy(dest, " ");
_memcpy(dest, src, strlen(src)+1);
}
