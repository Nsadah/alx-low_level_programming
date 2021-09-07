/**
* puts_half - prints to string
* Description: Prints to  string
* @str: the value it receives
* void puts_half(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h"
void puts_half(char *str)
{
  int n = strlen(str);
  char suffix;

  while (0 < n && str[--n] != '/');
  if (str[n] == '/') 
{
    suffix = str + n + 1;
    str[n] = '\0';
  }

  printf("\n");
}
