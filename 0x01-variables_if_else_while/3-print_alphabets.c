#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 Success
 */

int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		putchar(letter);
	}
	for (letter = 65; letter < 91; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
