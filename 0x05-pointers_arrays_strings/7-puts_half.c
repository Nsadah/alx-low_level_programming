/**
* puts_half - prints to string
* Description: Prints to  string
* @str: the value it receives
* void puts_half(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include "main.h"
void puts_half(char *str)
{
  int n = strlen(str);
  char* suffix = str + n;

  while (0 < n && s[--n] != '/');
  if (s[n] == '/') 
{
    suffix = s + n + 1;
    s[n] = '\0';
  }

  printf("\n");
  return 0;
}
