#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string
 *
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		if (i == '\0')
		{
			continue;
		}
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
