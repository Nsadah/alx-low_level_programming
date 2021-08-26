/**
 * main - print with proper grammar, but the outcome is a piece of art,
 *
 * Return: 0
 */
#include<stdio.h>
int main() /*main prints text*/
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

 /* sizeof evaluates the size of a variable */
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
/* Description: This is where the printing happens */
    return 0;
/* Description: This returns 0 */
}
