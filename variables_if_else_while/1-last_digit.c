#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
int num;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > n)
{
printf("the last digital of %d is %i  and  is greater than 5\n", n, num);
}
else if (num == 0)
{
printf("the last digital of %d is %i  and  is 0\n", n, num);
}
else if (num < 6 && num != 0)
{
printf("the last digital of %d is %i and  is less than 6 and not 0\n", n, num);
}
return (0);
}
