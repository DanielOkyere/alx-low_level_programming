#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct of dog
 * @name: name of dog(char *)
 * @age: age of dog(float)
 * @owner: owner of dog(char *)
 * Description: creates a structure of dogs
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void *print_dog(struct dog *d);
void *init_dog(struct dog *d, char *name, float age, char *owner);
#endif
