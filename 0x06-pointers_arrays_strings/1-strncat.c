/**
* _strncat - prints to int
* Description: Updates value to 98
*@dest: the value it receives
*@dsrct: the value it receives
*@n: the value it receives
* void reset_to_98(int *n)
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return dest;
}
