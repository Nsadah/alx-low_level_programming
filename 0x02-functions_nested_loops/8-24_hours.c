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
int hour, minute;
hour=minute=0;
  
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%2d : %2d" ,hour,minute);
}
}
}
