/**
* puts_half - prints to string
* Description: Prints to  string
* @str: the value it receives
* void puts_half(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include <string.h>
#include "main.h"
void puts_half(char *str)
{
char leftHalf, rightHalf;
int length, mid, i, k;
length = strlen(str);
mid = length/2;
for(i = 0; i < mid; i++) 
{
leftHalf[i]= str[i];
}
leftHalf[i] = '\0';
for(i = mid, k = 0; i <= length; i++, k++) 
{
rightHalf[k]= str[i];
}
printf("\n");

}
}
