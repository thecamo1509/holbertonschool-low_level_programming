#include <stdio.h>
/**
* main - is the program itself
* Return: always 0
*/

int main(void)
{
	int num;
	int fizz = 3;
	int buzz = 5;

	for (num = 1; num <= 100; num++)
	{
		if (num == fizz && num != buzz)
		{
		fizz = fizz + 3;
		printf("Fizz ");
		}
		else if (num == buzz && num != fizz)
		{
		buzz = buzz + 5;
		printf("Buzz ");
		}
		else if (num == fizz && num == buzz)
		{
		fizz = fizz + 3;
		buzz = buzz + 5;
		printf("FizzBuzz ");
		}
		else if (num == 100)
		{
		printf("Buzz");
		}
		else
		{
		printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
