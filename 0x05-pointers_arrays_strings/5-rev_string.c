/**
* rev_string - prints to string
* Description: Prints to  string
* @s: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include<stdio.h>
#include "main.h" 
int string_length(char*); 
void rev_string(char *s) 
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
c++;
return c;
}
