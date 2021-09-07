/**
* rev_string - prints to string
* Description: Prints to  string
* @s: the value it receives
* void _puts(char *s)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h"
void rev_string(char *s)
{
int n = strlen(s);
int i;
while (i < n / 2)
{
char ch = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = ch;
i++; 
}
}
