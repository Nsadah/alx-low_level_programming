/**
 * print_line - prints to int
 * Description: Prints line
 * void print_line(int n)
 */
#include "main.h"
void print_line(int n)
{
int j;
for(j=1; j<=n; j++)
{
if(n > 0)
{
printf("_");
}
else
{
printf("\n");
}
}
printf("\n");
return 0;
}
