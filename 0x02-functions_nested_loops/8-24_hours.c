#include "holberton.h"
/**
 * jack_bauer - is a function to create a clock
 * Return: the absolute value of an int number
 */
void jack_bauer(void)
{
	int hour1;
	int hour2;
	int minutes1;
	int minutes2;

	for (hour1 = 0; hour1 <= 2; hour1++)
	{
		for (hour2 = 0; hour2 <= 9; hour2++)
		{
			for (minutes1 = 0; minutes1 < 6; minutes1++)
			{
				for (minutes2 = 0; minutes2 <= 9; minutes2++)
				{
				if (hour1 == 2 && hour2 > 3)
				{
				continue;
				}
				else
				{
				_putchar('0' + hour1);
				_putchar('0' + hour2);
				_putchar(':');
				_putchar('0' + minutes1);
				_putchar('0' + minutes2);
				_putchar('\n');
				}
				}
			}
		}
	}
}
