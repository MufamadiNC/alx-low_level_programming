#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @lastOne: integer value
 *
 * Return: value of last digit
 */

int print_last_digit(int lastOne)
{
	int mod;

	if (lastOne < 0)
	{
		lastOne = -lastOne;
	}

	mod = lastOne % 10;

	_putchar(mod);

	return (mod);
}
