#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 Success
 */

int main(void)
{
	int letter;

	for (letter = 122; letter > 96; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
