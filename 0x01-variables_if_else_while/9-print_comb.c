/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include<stdio.h>
#include <stdlib.h> 
#include <string.h>
int main(void)
{
int i;

for(i = 0; i < 10 ; i++)
{	
putchar((i)+'0');
if(i < 9)
putchar(',');
}

putchar ('\n');

return (0);
}
