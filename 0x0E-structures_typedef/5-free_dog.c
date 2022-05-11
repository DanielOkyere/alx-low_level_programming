#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory for dog
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
