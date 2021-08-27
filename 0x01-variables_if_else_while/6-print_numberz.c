/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include<stdio.h>
int main(void)
{
int x = 0;
while (x < 10)
{
for (x = 0; x < 10; x++)
putchar ((x) + '0');
putchar ('\n');
}
return (0);
}
