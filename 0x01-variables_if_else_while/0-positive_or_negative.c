#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
if (n == 0)
{
printf("%i is zero\n", n);
}
if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
