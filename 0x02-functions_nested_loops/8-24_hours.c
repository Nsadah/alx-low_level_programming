/**
 * jack_bauer(void); - prints to int
 * Description: prints time
 * Return: 0
 */
#include "main.h"
#include <stdio.h>
#include <time.h>
void jack_bauer(void)
{
char h;
char m;
for (h = '00'; h < '24'; h++)
{
for (m = '00'; m < 60; m++)
{
putchar (h);
putchar(':');
putchar (m);
}
}
return (0);
}
