#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function to prints a struct dog
 * @d: Pointer
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		if (d->age == 0)
			printf("Age: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
		{
			printf("Name: %s \nAge: %1f \nOwner: %s \n", d->name, d->age, d->owner);
		}
	}
}
