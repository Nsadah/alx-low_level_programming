/**
 * _abs - prints to int
 * Description: prints absolute value
 *@n: the integer value it receives
 * Return: 0
 */
#include "main.h"

int _abs(int N)
{
    if (N < 0) {
        N = (-1) * N;
    }
 
    printf("%d ", N);
}
 

int main()
{
 
    int N = -12;
 
   _abs(N);
    return 0;
}
