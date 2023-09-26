#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			putchar(' ');
		}
		for (j = size; j >= i; j--)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
