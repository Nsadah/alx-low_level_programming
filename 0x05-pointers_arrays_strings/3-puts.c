/**
* _puts - prints to string
* Description: Prints to  string
* @str: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include "main.h"
void _puts(char *str)
{
char s;
s = *str;
while(s != '\0')
printf("%c",s++);
}
