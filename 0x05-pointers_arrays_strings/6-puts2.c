/**
* puts2 - prints to string
* Description: Prints to  string
* @str: the value it receives
* void puts2(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h"
void puts2(char *str)
{
unsigned int i;
for (i = 0; i < strlen(str); i += 2)
{
printf("%c", str[i]);
}
printf("\n");
}
