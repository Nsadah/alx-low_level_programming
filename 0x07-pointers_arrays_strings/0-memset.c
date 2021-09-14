<<<<<<< HEAD
/**
* _memset - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* Description: Prints to string
*@s: the value it receives
*@b: the value it receives
*@n: the value it receives
* char *_memset(char *s, char b, unsigned int n)
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
char *memory = s;
char value = b;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
=======
/**
* _memset - Fills the first @n bytes of the memory area pointed to by @s with the constant byte @b.
* Description: Prints to string
*@s: the value it receives
*@b: the value it receives
*@n: the value it receives
* char *_memset(char *s, char b, unsigned int n)
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
char *memory = s;
char value = b;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
>>>>>>> 2ed939b8c222b1f8a10392d55b0dbdc7b9ea57d7
