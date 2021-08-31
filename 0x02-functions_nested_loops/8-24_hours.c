/**
 * jack_bauer(void); - prints to int
 * Description: prints time
 * Return: 0
 */
#include "main.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
void jack_bauer(void)
{
int hour, minute, second;
hour=minute=second=0;
  
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
printf("%2d : %2d" ,h,m);
}
}
}
