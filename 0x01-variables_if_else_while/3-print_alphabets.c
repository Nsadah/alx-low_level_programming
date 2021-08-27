/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int ch;
/* print lowercase letters */
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar ('\n');
return (0);
}
