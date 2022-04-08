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
puts("is positive\n");
}
if (n == 0)
{
puts("is zero\n");
}
if (n < 0)
{
puts("is negative\n");
}
return (0);
}
