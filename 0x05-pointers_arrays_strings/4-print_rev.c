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
char c;
if (begin >= end)
return;
c = *(s+begin);
   *(s+begin) = *(s+end);
   *(s+end)   = c;

   reverse(s, ++begin, --end);
}
