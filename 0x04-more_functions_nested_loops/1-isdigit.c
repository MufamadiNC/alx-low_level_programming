#include "main.h"

/**
 * _isdigit -  checks for a digit 0 through 9
 * @c: digit as integer
 *
 * Return: 1 if true, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
