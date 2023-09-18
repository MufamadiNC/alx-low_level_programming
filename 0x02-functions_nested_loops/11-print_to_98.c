#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer value
 */

void print_to_98(signed int n)
{
	if (n >= 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n < 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d", n);
	_putchar('\n');
}
