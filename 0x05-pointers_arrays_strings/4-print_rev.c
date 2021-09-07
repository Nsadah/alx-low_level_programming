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
int string_length(char *pointer);
int string_length(char*);
void print_rev(char *s)
{
int length, c;
char *begin, *end, temp;
length = string_length(s);
begin  = s;
end    = s;
for (c = 0; c < length - 1; c++)
end++;
for (c = 0; c < length/2; c++)
{        
temp   = *end;
*end   = *begin;
*begin = temp;
begin++;
end--;
}
}
int string_length(char *pointer)
{
int c = 0;
while( *(pointer + c) != '\0' )
{c++;
return c;
}
}
}
