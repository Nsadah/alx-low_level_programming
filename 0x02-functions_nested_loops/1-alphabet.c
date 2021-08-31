/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include "main.h"
void print_alphabet(void);
void print_alphabet(void)
{
char ch; 
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);	
}
_putchar('\n');
return;
}
