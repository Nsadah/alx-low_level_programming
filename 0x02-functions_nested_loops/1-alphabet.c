/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * void print_alphabet(void)
 */
#include "main.h"
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
