/**
* main - prints to string
* Description: Prints alphabet in lowercase
* Return: 0
*/
#include<stdio.h>
#include <unistd.h>
int main(void)
{
int a , b, c , d;
for (a = '0'; a <= '9' ; a++)
{
for (b = '0'; b <= '9' ; b++)
{
for (c = '0'; c <= '9' ; c++)
{
for(d = '0'; d <= '9' ; d++)
{
if(!(a==b || a==c || a==d || b==c || b==d || c==d))
{
putchar (a);
putchar (b);
putchar (' ');
putchar (c);
putchar (d);
putchar (',');
putchar (' ');
}		
}
}
}
}
putchar ('\n');
return (0);
}
