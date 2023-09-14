#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: a charater with integer value
 *
 * Return: 1 if c is lowercase, 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
	return (0);
}
