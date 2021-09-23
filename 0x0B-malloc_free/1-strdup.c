#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - create a array
 * @str: size array
 *
 *Return: Always 0.
 */

char *_strdup(char *str)
{
	char *pointer;
	int size, size2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{}
	pointer = malloc(sizeof(char) * size + 1);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (size2 = 0; size > size2; size2++)
	{
		pointer[size2] = str[size2];
	}

	pointer[size2] = '\0';

	return (pointer);
}
