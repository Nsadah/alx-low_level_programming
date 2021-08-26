/**
 * main - prints types of variables
 *
 * Return: 0
 */
#include<stdio.h>
int main(void) /*main prints text*/
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;
/* sizeof evaluates the size of a variable */
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
/* Description: This is where the printing happens */
return (0);
/* Description: This returns 0 */
}
