/**
* print_alphabet - prints to string
* Description: Prints alphabet in lowercase
* void print_alphabet(void)
*/
#include "main.h"
#include<ctype.h>
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
