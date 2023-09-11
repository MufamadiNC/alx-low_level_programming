#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 Success
 */

int main(void)
{
	int _digit, alphs;

	for (_digit = 48; _digit <= 57; _digit++)
	{
		putchar(_digit);
	}

	for (alphs = 97; alphs <= 102; alphs++)
	{
		putchar(alphs);
	}
	putchar('\n');
	return (0);
}
