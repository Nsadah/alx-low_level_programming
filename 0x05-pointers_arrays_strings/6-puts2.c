/**
* _puts - prints to string
* Description: Prints to  string
* @str: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h"
void _puts2(char *str)
{
char s;
int i;
for(i = 0; i < strlen(str); i+=2)
{
putchar(str[i]);
s[i/2]=str[i];
}
