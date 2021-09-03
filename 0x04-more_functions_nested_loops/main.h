#include <stdio.h>
#include <unistd.h>
/**
*_putchar writes the characyer c yto stdout
*@c: The character it receives
*
*Return: On success 1.
*On error, -1 is returned and error is set appropriately
*/
int _putchar(char c)
{
  return (write (1, &c, 1));
}

#ifndef MAIN_H
#define MAIN_H
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
#endif /* MAIN_H */
