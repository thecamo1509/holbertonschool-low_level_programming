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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		free(ptr);
		return (NULL);
	if (name == NULL)
		ptr->name = "";
	else
		ptr->name = name;
	if (owner == NULL)
		ptr->owner = "";
	else
	ptr->owner = owner;

	ptr->age = age;

	return (ptr);
}
