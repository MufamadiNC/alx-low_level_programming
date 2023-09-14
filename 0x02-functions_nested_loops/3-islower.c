#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: a charater with integer value
 *
 * Return: 1 if c is lowercase, 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c < 'a')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
