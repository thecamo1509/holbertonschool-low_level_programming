#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function to prints a struct dog
 * @d: Pointer
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *nombre;
		char *dueno; 

		nombre = (d->name != NULL ? d->name : "(nil)" );
		dueno = (d->owner != NULL ? d->owner : "(nil)");

		if (d)
		{
			printf("Name: %s\n", nombre);
			printf("Age: %.1f\n", d->age);
			printf("Owner: %s\n", dueno);
		}
		else
		{
		}
		
	}
}
