<<<<<<< HEAD
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
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit= n % 10;
/*code goes there */
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n,lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lastDigit);
}
return (0);
}
=======
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
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit= n % 10;
/*code goes there */
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n,lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lastDigit);
}
return (0);
}
=======

>>>>>>> 83326dd43e18921d66285871784f7db136fee888
>>>>>>> ce357c8ca7a4babbdd8565da8e13ca27973ed9b2
