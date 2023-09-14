#include "main.h"

/**
 * _abs - absolute value of a function
 * @j: signed integer value
 *
 * Return: unsigned j
 */

int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
