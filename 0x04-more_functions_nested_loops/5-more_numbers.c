#include "holberton.h"
/**
* more_numbers - is a function to print numbers from 0 to 14
* Return: no return
*/
void more_numbers(void)
{
	int num;
	int counting;

	for (counting = 0; counting <= 9; counting++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
			_putchar ((num / 10) + '0');
			}
		_putchar ((num % 10) + '0');
		}
	_putchar('\n');
	}
}
