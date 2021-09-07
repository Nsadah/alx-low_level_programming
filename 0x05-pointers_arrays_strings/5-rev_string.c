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
char rev;
char *sptr = s;
char *rptr = rev; 
int i = -1;
while(*sptr)
{
sptr++;
i++;
}
while(i >= 0)
{
        sptr--; 
        *rptr = *sptr;
        rptr++;
        i--;
    }
    
    *rptr = '\0'; 
    rptr = rev; 

    while(*rptr)
    {
        *sptr = *rptr;
        sptr++;
        rptr++;
    }
}
