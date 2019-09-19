#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
main()
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int : %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1d byte(s)\n", sizeof(float));
	return (0);
}
