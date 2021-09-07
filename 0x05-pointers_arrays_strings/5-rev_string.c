/**
* rev_string - prints to string
* Description: Prints to  string
* @s: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h" 
void rev_string(char *s)
{
int length = strlen(s);
int i;
for (i = length - 1; i >= 0; i--)
{
if (s[i] == ' ') 
{
s[i] = '\0';
printf("%s ", &(s[i]) + 1);
}
}
printf("%s", s);
}
