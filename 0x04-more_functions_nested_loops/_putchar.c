/**
*_putchar writes the characyer c yto stdout
*@c: The character it receives
*
*Return: On success 1.
*On error, -1 is returned and error is set appropriately
*/
#include <unistd.h>
int _putchar(char c)
{
  return (write (1, &c, 1));
}
