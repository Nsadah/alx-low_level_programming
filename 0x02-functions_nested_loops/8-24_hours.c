/**
 *jack_bauer - prints to string
 * Description: Prints alphabet in lowercase
 * void jack_bauer(void)
 */
#include "main.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
void jack_bauer(void)
{
int hour, minute;
hour = minute = 0;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
