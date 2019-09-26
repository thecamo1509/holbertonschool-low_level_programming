#include "holberton.h"
/**
* print_numbers - Is a function to print numbers from 0 to 9
* Return: no return
*/

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	_putchar (num);
	}
	_putchar ('\n');
}
