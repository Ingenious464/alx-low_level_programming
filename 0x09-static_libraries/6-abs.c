#include "main.h"

/**
 * _abs - function that computes the absolute value
 * @n: integer to be evaluated
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}

	return (n);
}
