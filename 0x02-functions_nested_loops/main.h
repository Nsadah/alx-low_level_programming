#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void print_alphabet(void)
void print_alphabet(void)
{
int ch; 
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);	
} 
}
#endif
