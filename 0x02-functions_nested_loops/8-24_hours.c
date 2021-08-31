/**
 * jack_bauer(void); - prints to int
 * Description: prints time
 * Return: 0
 */
#include "main.h"
#include <stdio.h>
#inlude <time.h>
void jack_bauer(void);
{
int h;
int m;
for (h = '00'; h < '24'; h++)
{
for (m = '00'; m < 60; m++)
{
putchar (m);
putchar (m);
}
}
return (0);
}
