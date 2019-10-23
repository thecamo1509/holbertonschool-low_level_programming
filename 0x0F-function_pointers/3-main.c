#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the main function
 * @argc: The argc
 * @argv: The argv
 * Return: The answer
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '/' &&
	*argv[2] != '*' && *argv[2] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	int ans = get_op_func(argv[2])(a, b);

	printf("%d\n", ans);
	return (0);
}
