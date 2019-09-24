#include "holberton.h"
/**
 * print_alphabet_x10 -Is a function that displays the alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc;
	int counting;
for (counting = 1; counting <= 10; counting++)
{
	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
}
