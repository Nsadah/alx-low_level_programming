#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int base = 1, i = 0;

;

while (i >= 0)
{
res += ((b[i] - '0') * base);
base *= 2;
i--;
}
  if (b[i] != '0' && b[i] != '1')
return (0);
  else
return (res);
}
