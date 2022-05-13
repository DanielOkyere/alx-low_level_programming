#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize dog struct
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: string
 */
void *init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *newdog;

	if (d == NULL)
		return (NULL);

	newdog = d;
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
