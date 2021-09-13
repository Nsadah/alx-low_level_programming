/**
* reverse_array - prints to int
* Description: prints reverse of an array
*@a: the value it receives
*@n: the value it receives
*void reverse_array(int *a, int n)
*/
#include "main.h"
<<<<<<< HEAD
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
=======
void reverse_array(int *a, int n)
{
int *left = a;
int *right;
right = &a[n - 1];
left = a;
while(left < right)
{
*left ^= *right;
*right   ^= *left;
*left ^= *right;
left++;
right--;
}
>>>>>>> bb8876aedeb1d5248284e247a3370a9dba4169d1
}
