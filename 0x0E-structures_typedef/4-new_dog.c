/**
* _strlen - This will count the number of characters from a string
* @s: Parameter
* Return: Will return the number of char
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
return (i);
}
/**
* _strncpy - This function will copy a string
* @dest: Destiny string
* @src: source string
* @n: number of n positions
* Return: will return the dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	i = _strlen(name);
	j = _strlen(owner);
	ptr->name = malloc(i + 1);

	if (ptr->name == NULL)
		{
		free(ptr);
		return (NULL);
		}
	ptr->owner = malloc(j + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = _strncpy(ptr->name, name, i + 1);
	ptr->owner = _strncpy(ptr->owner, owner, j + 1);
	ptr->age = age;
	return (ptr);
}
