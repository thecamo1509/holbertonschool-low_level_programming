#include "holberton.h"
/**
 * times_table - is a function to create a multiply table
 * Return: the absolute value of an int number
 */
void times_table(void)
{
	int column;
	int row;
	int ans;
	int a;
	int b;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			ans = column * row;
			if (ans <= 9 && row != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + ans);
			}
			else if (row == 0)
			{
			_putchar('0' + ans);
			}
			else
			{
			a = ans % 10;
			b = ans / 10;
			_putchar(',');
			_putchar(' ');
			_putchar('0' + b);
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}
}
