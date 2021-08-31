/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: Always (Success)
 */
#include <stdio.h>
#include "main.h"
{
print_alphabet();
return (0);
}
void print_alphabet(void);
{
char ch; 
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);	
}
_putchar('\n');
return;
}
