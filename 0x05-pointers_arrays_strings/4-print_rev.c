/**
* print_rev - prints to string
* Description: Prints to  string
* @s: the value it receives
* void print_rev(char *s)
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{
char r;
char *beg = s;
char *end;
int i = -1;
r = *end;
while (*beg)
{
beg++;
i++;
}
while (i >= 0)
{
beg--;
*end = *beg;
end++;
--i;
}
*end = '\0';
}
