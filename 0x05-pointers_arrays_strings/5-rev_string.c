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
char rev;
int i, j, count = 0;
scanf("%s", s);
while (s[count] != '\0')
{
count++;
}
j = count - 1;
for (i = 0; i < count; i++)
{
rev[i] = s[j];
j--;
}
printf("\n");
}
