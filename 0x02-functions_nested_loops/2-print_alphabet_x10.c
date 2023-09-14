#include "main.h"

/**
 * print_alphabet_x10 - s/o 10 times the alphabet, in lowercase
 *
 * Return: 0 succes.
 */

void print_alphabet_x10(void)
{
	int row1to10, col;

	for (row1to10 = 0; row1to10 < 10; row1to10++)
	{
		for (col = 'a'; col <= 'z'; col++)
		{
			_putchar(col);
		}
	_putchar('\n');
	}
}
