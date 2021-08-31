/**
 * print_alphabet_x10 - prints to string
 * Description: Prints alphabet in lowercase 10 times
 * void print_alphabet_x10(void)
 */
#include "main.h"
void print_alphabet_x10(void)
{
int x;
char ch;
for (x = 0; x <= 9; x++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return;
}
