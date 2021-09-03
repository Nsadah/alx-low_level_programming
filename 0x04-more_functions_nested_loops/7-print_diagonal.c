/**
 * print_diagonal - Entry point
 * Description: Prints lines
 *@n: integer value it receives
 * void print_diagonal(int n)
 */
#include "main.h"
void print_diagonal(int n)
{
int i;
int j;
for (i = n; i >= 1; i--)
{
for (j = n; j >= i; j--)
{
putchar (' ');
}
if (n <= 0)
{
putchar ('\n');
}
else (n > 0)
{
putchar ('\\');

}
putchar ('\n');
}
}
