/**
* rev_string - prints to string
* Description: Prints to  string
* @s: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include "main.h" 
void rev_string(char *s)
{
int length = strlen(str);
int i;
for (i = length - 1; i >= 0; i--)
{
if (str[i] == ' ')
{
str[i] = '\0';
printf("%s ", &(str[i]) + 1);
}
}
printf("%s", str);
}
