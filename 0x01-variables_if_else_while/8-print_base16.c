/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include<stdio.h>
int main(void)
{
int x = 0;
int i;
while (x < 10)
{
for (x = 0; x < 10; x++)
putchar((x) + '0');
}
for (i = 'a'; i <'g'; i++)
putchar (i);
putchar ('\n');
return (0);
}
