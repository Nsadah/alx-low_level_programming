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
int len;
while ((len = getline(s)) > 0)
{
if (len > 0) 
reverse(s, len);
printf("%s\n", s);
}
}
