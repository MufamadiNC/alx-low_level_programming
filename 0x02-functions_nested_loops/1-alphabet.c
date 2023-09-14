#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase & newline
 *
 * Return: 0 Success
 */

void print_alphabet(void)
{
	int letters;

	for (letters = 97; letters < 123; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
