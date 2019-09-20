#include <stdio.h>
/*Headers*/

/*main function*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int b;

	for (c = '0'; c < '9'; c++)
	{
		for (b = (c + 1); b <= '9'; b++)
		{
			putchar(c);
			putchar(b);
			if (c < '8' || b < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
