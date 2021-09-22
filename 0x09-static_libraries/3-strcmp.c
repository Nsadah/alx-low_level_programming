/**
* _strcmp - prints to string
* Description: compares two strings
*@s1: the value it receives
*@s2: the value it receives
*int _strcmp(char *s1, char *s2)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0' || *s2 == '\0')
break;
s1++;
s2++;
}
if (*s1 == '\0' && *s2 == '\0')
return 0;
else{
  return (-1);
}
}
