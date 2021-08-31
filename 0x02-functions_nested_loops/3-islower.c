/**
 * print_alphabet - prints to string
 * Description: Prints alphabet in lowercase
 * void print_alphabet(void)
 */
#include "main.h"
#include<ctype.h>
int _islower(int c)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
if ( int c == islower(ch) )
{  
return 1;
}
else
{
return 0;   
}
}
}
