/**
* print_triangle - Entry point
* Description: prints triangle
*@size: the integer value it receives
* Return: 1 if true. 0 if false.
*/
#include "main."
void print_triangle(int size);
{
int i, j, k;
for(i = 1;i <= size;i++)
{
for(j = size;j > i;j--)
{
printf(" ");
}
for(k = 1;k <= j;k++)
{
printf("*");
}
printf("\n");
}
}
