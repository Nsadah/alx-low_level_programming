/**
* print_rev - prints to string
* Description: Prints to  string
* @s: the value it receives
* void print_rev(char *s)
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
#include <string.h>
void print_rev(char *s)
{
char tmp;
int l, lind, rind,i;
l = strlen(s);
lind = 0;
rind = l-1;
for (i = lind; i < rind; i++)
{
tmp = s[i];
s[i] = s[rind];
s[rind] = tmp;
rind--;
}
printf("\n")
}
