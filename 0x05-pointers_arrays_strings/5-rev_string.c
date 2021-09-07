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
int i = str.length() - 1;
    int start, end = i + 1;
    string result = "";
     
    while(i >= 0)
    {
        if(str[i] == ' ')
        {
            start = i + 1;
            while(start != end)
                result += str[start++];
             
            result += ' ';
             
            end = i;
        }
        i--;
    }
    start = 0;
    while(start != end)
        result += str[start++];
     
    return result;
}
