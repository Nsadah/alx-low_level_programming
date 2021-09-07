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
int string_length(char*); 
void print_rev(char *s)
{
int i;
for(i=0; s[i]!='\0'; i++);
for(i--; i>=0; i--)
   {
     printf("%c",s[i]);
   } 
}
printf("\n");
}
