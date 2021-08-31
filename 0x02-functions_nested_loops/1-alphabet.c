/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: Always (Success)
 */
#include <stdio.h>
#include "main.h"
print_alphabet();
putchar ('\n');
return 0;
}
void print_alphabet(void)
{
char ch; 
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);	
}
_putchar('\n');
return;
}


