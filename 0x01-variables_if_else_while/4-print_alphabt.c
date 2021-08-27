/**
 * main - prints to string
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
#include<stdio.h>
int main()
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
if((ch < 'q'||ch > 'q') && (ch > 'e'||ch < 'e'))
putchar(ch);
putchar('\n');
return 0;
}
