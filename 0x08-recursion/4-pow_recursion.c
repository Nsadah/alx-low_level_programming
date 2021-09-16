/**
* _pow_recursion - returns the value of x raised to the power of y
* Description: Prints factorials
*@x: the value it receives
*@y: the value it receives
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
#include <math.h>
int _pow_recursion(int x, int y)
{
if(y < 0)
return (-1);
else
return x * pow(x, y - 1);
}
