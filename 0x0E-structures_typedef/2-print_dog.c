#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function to prints a struct dog
 * @d: Pointer
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		char *nombre;
		char *dueno;

		nombre = ((*d).name != NULL ? (*d).name : "(nil)");
		dueno = ((*d).owner != NULL ? (*d).owner : "(nil)");

			printf("Name: %s\n", nombre);
			if (d->age)
			{
			printf("Age: %f\n", d->age);
			}
			printf("Owner: %s\n", dueno);
	}
}
