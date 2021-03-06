#include "variadic_functions.h"
/**
 * print_all - This function will print anything
 * @format: Format of the entry
 * Return: No return
 */

void print_all(const char * const format, ...)
{
	int i;
	int k;
	double j;
	char *s;
	va_list list;

	k = 0;
	va_start(list, format);
	while (format && format[k])
	{
		switch (format[k])
		{
		case 'c':
			i = va_arg(list, int);
			printf("%c", i);
			break;
		case 'i':
			i = va_arg(list, int);
			printf("%i", i);
			break;
		case 'f':
			j = va_arg(list, double);
			printf("%f", j);
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s", s);
			break;
		}
		if ((format[k] == 'c' || format[k] == 'i' ||
		format[k] == 'f' || format[k] == 's') && format[k + 1] != '\0')
			printf(", ");
		k++;
	}
	va_end(list);
	printf("\n");
}
