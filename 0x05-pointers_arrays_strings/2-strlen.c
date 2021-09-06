/**
* int _strlen - prints to int
* Description: Returns length of string
* @s: the value it receives
* int _strlen(char *s)
*/
#include "main.h"
int _strlen(char *s)
{
unsigned int count = 0;
while(*s!='\0')
{
count++;
s++;
}
return count;
}
