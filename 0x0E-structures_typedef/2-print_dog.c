#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - print struct dog
 * @d: dog
 * Return: NULL or print dog
 */
void *print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	return (NULL);
}
