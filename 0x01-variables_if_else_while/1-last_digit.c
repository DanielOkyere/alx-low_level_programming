#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, a);
	} else if (a == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, a);
	} else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
