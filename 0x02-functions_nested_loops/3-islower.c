/**
 * print_alphabet - prints to string
 * Description: Prints alphabet in lowercase
 * void print_alphabet(void)
 */
#include "main.h"
#include<ctype.h>
int main()
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
if ( islower(ch) )
{  
return 1;
}
else
{
return 0;   
}
}
}
