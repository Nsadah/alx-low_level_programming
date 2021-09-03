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
printf(" ");
}
if(n > 0)
{
printf("\\");
printf("\n");
}
else
{
printf("\n");
}
}
}
