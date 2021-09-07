/**
* rev_string - prints to string
* Description: Prints to  string
* @s: the value it receives
* void _puts(char *str)
* Return: Always (Success)
*/
#include <stdio.h>
#include "main.h" 
void rev_string(char *s)
{
 int length = strlen(str);
 
    // Traverse string from end
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
 
            // putting the NULL character at the
            // position of space characters for
            // next iteration.        
            str[i] = '\0';
 
            // Start from next character    
            printf("%s ", &(str[i]) + 1);
        }
    }
 
    // printing the last word
    printf("%s", str);
}
