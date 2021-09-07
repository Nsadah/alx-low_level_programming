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
int n = strlen(s);
int i;
for (i = 0; i < n / 2; i++)
{
char ch = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = ch;

}
