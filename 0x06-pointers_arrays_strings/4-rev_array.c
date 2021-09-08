/**
* reverse_array - prints to int
* Description: prints reverse of an array
*@a: the value it receives
*@n: the value it receives
*void reverse_array(int *a, int n)
*/
#include "main.h"
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
}
