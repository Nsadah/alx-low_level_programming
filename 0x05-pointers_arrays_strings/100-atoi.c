/**
* _atoi - prints to string
* Description: Prints to string
*@dest: the value it receives
*@src: the value it receives
* int _atoi(char *s)
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
