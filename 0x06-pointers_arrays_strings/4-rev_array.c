/**
* reset_to_98 - prints to int
* Description: Updates value to 98
*@n: the value it receives
* void reset_to_98(int *n)
*/
#include "main.h"
// Iterative C program to reverse an array
#include<stdio.h>
#include<stdlib.h>
void reverse_array(int *a, int n)
{
	int x;
    int y;
    while (n < x)
    {
        y = a[n];  
        a[n] = a[x];
        a[x] = y;
        n++;
        x--;
    }
    
}       
 
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}


int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));

    return (0);
}
