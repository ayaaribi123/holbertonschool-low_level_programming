#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncpy - check the code
*
*@src: pointer
*@dest: pointer
*@n: pointer
*Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

    i = 0;
    while (*src != '\0' && n < i)
    {
    *dest = *src;
    dest++;
    src++;
    }
    return (dest);
}
