/**
* _print_rev_recursion - prints string in reverse
* Description: Prints to string
*@s: the value it receives
*/
#include "main.h"
#include <stdio.h>
#include <string.h>
void _print_rev_recursion(char *s)
{
int i, len = 0;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
