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
char reverse;
int len, i, index, wordStart, wordEnd;
len   = strlen(str);
index = 0;
wordStart = len - 1;
wordEnd   = len - 1;
while(wordStart > 0)
{
if(str[wordStart] == ' ')
{
i = wordStart + 1;
while(i <= wordEnd)
{
reverse[index] = str[i];
i++;
index++;
}
reverse[index++] = ' ';
wordEnd = wordStart - 1;
}
wordStart--;
}
for(i=0; i<=wordEnd; i++)
{
reverse[index] = str[i];
index++;
}
reverse[index] = '\0'; 
}
