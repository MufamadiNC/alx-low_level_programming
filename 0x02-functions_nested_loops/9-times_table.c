#include "main.h"

/**
 * times_table - times table of 9
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int prod9 = i * j;

			if (j > 0 && j <= 9 && prod9 <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod9 + '0');
			}
			else if (j > 0 && j <= 9 && prod9 > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod9 / 10) + '0');
				_putchar((prod9 % 10) + '0');
			}
			else
			{
				_putchar(48);
			}
		}
	_putchar('\n');
	}
}
