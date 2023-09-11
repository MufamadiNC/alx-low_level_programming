#include <stdio.h>

/**
 * main - prints all single digit numbers of base 0 to 9, putchar
 *
 * Return: 0 Success
 */

int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
