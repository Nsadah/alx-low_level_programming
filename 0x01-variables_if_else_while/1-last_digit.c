#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints to string
 * Description: Prints positive, negative or zero
 * Return: 0
 */
int main(void)
{
int n;
int lastDigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (lastDigit > 0)
{
printf("Last digit of %d is %d\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d\n", n,lastDigit);
}
else
{
printf("Last digit of %d is %d\n", n,lastDigit);
}
return (0);
}
