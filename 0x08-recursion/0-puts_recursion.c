#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
