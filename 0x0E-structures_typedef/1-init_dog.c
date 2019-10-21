#include "dog.h"

/**
 * init_dog - Function to initialize structure
 * @d: This is a pointer
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: No return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
		d->name = name;
		d->age = age;
		d->owner = owner;
	return (d);
}
