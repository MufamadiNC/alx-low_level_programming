#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except e and q
 *
 * Return: 0 Success
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
