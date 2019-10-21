#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - This will create a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: pointr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;

	return (ptr);
}
