/**
* factorial - prints factorial of a number
* Description: Prints factorials
*@n: the value it receives
* Return: Always (Success)
*/
#include <stdio.h>
int factorial(int n)
{
int i;
int f = 1;
if (int i <= n)
f = f * n;
if (n < 0)
{
return (-1);
}
else
return (f);
}
