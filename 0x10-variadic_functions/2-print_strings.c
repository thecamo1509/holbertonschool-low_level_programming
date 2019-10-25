#include "variadic_functions.h"
/**
 * print_strings - Is a function to print strings
 * @separator: The separator
 * @n: Number of parameters
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *word;

	va_start(list, n);
		for (i = 0; i < n; i++)
		{
			word = va_arg(list, char *);
			if (word == NULL)
			{
				printf("(nil)");
			}
			if (word != NULL)
			{
			printf("%s", word);
			}
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	printf("\n");
}
