#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastnumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastnumber = n % 10;

	if (lastnumber < 6 && lastnumber != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumber);
	}
	else if (lastnumber > 5)
	{
	printf("Last digit of %d is  and %d is greater than 5\n", n, lastnumber);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, lastnumber);
	}
	return (0);
}
