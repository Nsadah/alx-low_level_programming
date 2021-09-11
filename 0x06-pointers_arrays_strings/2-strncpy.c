/**
* _strncpy - prints to string
* Description: prints to string
*@dest: the value it receives
*@src: the value it receives
*@n: the value it receives
*char *_strncpy(char *dest, char *src, int n)
*/
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *_strncpy(char *dest, char *src, int n)
{	
for(n=0;src[n]=dest[n];n++);
src[n]='\0'; 	
}
