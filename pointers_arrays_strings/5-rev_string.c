#include "main.h"
#include <string.h>
/**
*rev_string - check the code
*
*@s: pointer
*Return: Always 0.
*/
void rev_string(char *s)
{
    int l, i;
    char *begin_ptr, *end_ptr, temp;
 
    l = strlen(s);
 
    begin_ptr = s;
    end_ptr = s;
 
    for (i = 0; i < l - 1; i++)
		end_ptr++;
	
	for (i = 0; i < l / 2; i++) 
	{
		temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;

        begin_ptr++;
        end_ptr--;
    }
}
