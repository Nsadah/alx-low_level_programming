/**
* factorial - prints factorial of a number
* Description: Prints factorials
*@n: the value it receives
* Return: Always (Success)
*/
#include <stdio.h>
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
if (n == 0)
{
return (1);
}
else
return (-1);
}
