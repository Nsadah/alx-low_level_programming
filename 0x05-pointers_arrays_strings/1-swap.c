/**
* swap_int - prints to int
* Description: Swaps integer values
* @a: the value it receives
* @b: the integer value it receievs
* void swap_int(int *a, int *b)
*/
#include "main.h"
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
