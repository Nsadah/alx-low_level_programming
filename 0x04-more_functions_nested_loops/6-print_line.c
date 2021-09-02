/**
 * print_line - Entry point
 * Description: Prints lines
 * void print_line(int n)
 */
#include "main.h"
void print_line(int n)
{
for(j=1; j<=n; j++)
{
if(n > 0)
{
_putchar ('_');
}
else
{
putchar ('\n');
}
}        
putchar ('\n');
return 0;
}
