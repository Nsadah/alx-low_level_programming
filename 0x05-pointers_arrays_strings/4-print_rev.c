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
char rev[10000];
int i;
int j;
int count = 0;
while (s[count] != '\0')
{
count++;
}
j = count - 1;
for (i = 0; i < count; i++)
{
rev[i] = s[j];
j--;
}
printf("%s", rev);
}
