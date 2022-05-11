#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_dog - print struct dog
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)\n";
	if (d->owner == NULL)
		d->owner = "(nil)\n";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
