#include <stdio.h>
/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
putchar('\n');
}
return (0);
}
