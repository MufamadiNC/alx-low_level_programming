#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * print in ascending order.
 * Return: 0 Success
 */

int main(void)
{
	int i, n;

	for (i = 48; i <= 57; i++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (i == n)
			{
				continue;
			}
			else if (i > n)
			{
				continue;
			}
			else
			{
				putchar(i);
				putchar(n);

				if (i != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');

	return (0);
}
