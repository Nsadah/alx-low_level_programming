/**
 * print_alphabet - prints to string
 * Description: Prints alphabet in lowercase
 * void print_alphabet(void)
 */
#include "main.h"
void print_alphabet_x10(void)
{
int x;
char ch;
for (x = 0; x <= 10; x++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return;
}
