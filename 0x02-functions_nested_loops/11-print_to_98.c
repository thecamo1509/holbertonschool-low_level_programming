#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: the parameter to be tested
 *
 * Return: does not have return
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
	if (n < 98)
	{
	n = n + 1;
	}
	else
	{
	n = n - 1;
	}
}
printf("98\n");
}
