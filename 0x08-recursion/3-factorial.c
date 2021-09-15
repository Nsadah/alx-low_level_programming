/**
* factorial - prints factorial of a number
* Description: Prints factorials
*@n: the value it receives
* Return: Always (Success)
*/
#include <stdio.h>
int factorial(int n)
{
int i, f = 1;
for (i = 1; i <= n; i++)
{
f = f *i;
}
if (n < 0)
{
return (-1);
}
else
return (f);
}
