#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character if integer value
 *
 * Return: 1 if uppercase c otherwse c
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
