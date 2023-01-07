#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: character to be evaluated
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int low;

	for (low = 97; low <= 122; low++)
	{
		if (low == c)
		{
			return (1);
		}
	}

	return (0);
}
