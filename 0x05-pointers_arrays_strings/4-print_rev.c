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
char r;
int begin, end, count = 0;
while (s[count] != '\0')
count++;
end = count - 1;
for (begin = 0; begin < count; begin++)
{
r[begin] = s[end];
end--;
}
r[begin] = '\0';
printf("\n");
}
