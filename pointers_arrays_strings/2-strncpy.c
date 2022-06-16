#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - check the code
*
*@src: pointer
*@dest: pointer
*Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int n = dest;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; 
    return n;
}