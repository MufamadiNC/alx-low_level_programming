#include <stdio.h>

/**
 * main - all possible combinations of single-digit numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
