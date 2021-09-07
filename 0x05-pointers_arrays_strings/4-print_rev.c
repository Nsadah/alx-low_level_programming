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
int string_length(char*); 
void print_rev(char *s)
{
int len, i, j;
char ch;
for (len=0; s[len]!='\0'; len++);
i = len - 1;
for (j=0; j < len/2; j++, i--)
{
ch = s[i];
s[i] = s[j];
s[j] = ch;
}
printf("\n");
}
