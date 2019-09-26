#include "holberton.h"
/**
* more_numbers - is a function to print numbers from 0 to 14
* Return: no return
*/

void more_numbers(void)
{
	int num;
	int dig1;
	int dig2;
	int counting;

	for (counting = 0; counting <= 9; counting++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9 && num <= 14)
			{
			dig1 = num / 10;
			dig2 = num % 10;
			_putchar ('0' + dig1);
			_putchar ('0' + dig2);
			}
			else
			{
			_putchar ('0' + num);
			}
	}
	_putchar ('\n');
	}
}
