#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - This function will print numbers
 * @separator: This is the separator
 * @n: Number of parameters
 * Return: No return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(list, int));
				break;
			}
			printf("%d%s", va_arg(list, int), separator);
		}
	}
	va_end(list);
	printf("\n");
}
