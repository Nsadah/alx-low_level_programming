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
 
    // Print the absolute value
    printf("%d ", N);
}
 
// Driver Code
int main()
{
 
    // Given integer
    int N = -12;
 
    // Function call
   _abs(N);
    return 0;
}
