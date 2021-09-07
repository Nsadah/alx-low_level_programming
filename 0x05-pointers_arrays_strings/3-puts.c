/**
* _puts - prints to string
* Description: Prints to  string
* @str: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include "main.h"
void _puts(char *str)
{
char s;
s = *str;
while (*str != '\0')
printf ("%c",*str++);
}
