#include "variadic_functions.h"
/**
 * sum_them_all - This function will sum all parameters
 * @n: counting of parameters
 * Return: This will return the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for(i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
