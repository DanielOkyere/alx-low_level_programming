#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - positive_or_negative block
 * Return: 0
 */
/* betty style doc for function main goes there */
void positive_or_negative(void)
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
return;
}
