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
int n = strlen(s);
for (int i = 0; i < n / 2; i++)
{
char ch = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = ch;
}
}
