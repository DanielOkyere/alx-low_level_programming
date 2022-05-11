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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
