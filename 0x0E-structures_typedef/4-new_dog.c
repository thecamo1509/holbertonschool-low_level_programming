#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - This will create a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *nombre;
	char *dueno;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;

	nombre = name;
	dueno = owner;

	return (ptr);
}
