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
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
