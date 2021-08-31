/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: Always (Success)
 */
#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
int ch; 
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);	
} 
}
int main(void)
{
print_alphabet();
putchar ('\n');
return 0;
}
