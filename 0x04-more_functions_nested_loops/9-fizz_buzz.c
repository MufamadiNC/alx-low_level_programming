#include <stdio.h>

/**
 * main - prints 1 to 100
 * multiples of 3 are printed as 'Fizz'
 * multiplies of 5 are printed as 'Buzz'
 * multiples 3 and 5 are printed as 'FizzBuzz'
 * Return: 0 success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
