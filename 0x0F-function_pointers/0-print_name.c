#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This function will print the name
 * @name: parameter to print
 * @f: Parameter that points to the printingname function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);

	(*f)(name);
}
