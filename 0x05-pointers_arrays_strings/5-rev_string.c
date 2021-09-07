/**
* rev_string - prints to string
* Description: Prints to  string
* @s: the value it receives
* void _puts(char *s)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h"
void rev_string(char *s)
{
char r;
    char *beg = s;
    char *end;
    int i=-1;
    r = *end;

    while(*beg)
    {
     beg++;
     i++;
    }
    while(i>=0)
    {
     beg--;
     *end = *beg;
     end++;
     --i;
    }
    *end='\0';
}
