/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include<stdio.h>
int main(void)
{
int i;
for(i = 0; i < 100 ; i++)
{
{
putchar((i/10)+'0');
putchar((i%10)+'0');
putchar ('\n');
}
}
return (0);
}
