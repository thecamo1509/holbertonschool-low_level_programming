#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the square
 * Return: void
 */
void print_triangle(int size)
{
	char character;
	int a, b, spaces;

	character = '#';
	spaces = size - 1;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < spaces)
					_putchar(' ');
				else
					_putchar(character);
			}
			spaces--;
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
