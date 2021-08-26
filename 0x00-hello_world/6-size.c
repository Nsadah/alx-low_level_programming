/**
 * main - print with proper grammar, but the outcome is a piece of art,
 *
 * Return: 0
 */
#include<stdio.h>
int main(void) /*main prints text*/
{
char charType;
int intType;
long int longintType;
long long int longlongintType
float floatType;
    
/* sizeof evaluates the size of a variable */
printf("Size of a char: %zu byte\n", sizeof(charType));  
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longintType));
printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));

/* Description: This is where the printing happens */
return 0;
/* Description: This returns 0 */
}
