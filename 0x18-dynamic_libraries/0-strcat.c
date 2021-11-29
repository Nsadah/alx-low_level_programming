/**
* _strcat - prints to string
* Description: Prints to string
*@dest: the value it receives
*@src: the value it receives
* char *_strcat(char *dest, char *src)
* Return: Always (Success)
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return 0;
}
