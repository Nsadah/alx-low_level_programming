/**
 * print_sign - prints to int
 * Description: int n is a variable
 *@n: the integer value it receives
 * Return: 1
 */
#include "main.h"
#include <time.h>
#include <stdlib>
int positive_or_negative(void)
{
  int i;
  /* refer int i*/
srand(time(0));
i = rand() - RAND_MAX / 2;
/* your code goes there */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return (0);
}
