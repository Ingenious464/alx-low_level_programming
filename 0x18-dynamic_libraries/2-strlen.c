#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: pointer that will store the string's location
 * Return: size of the string
 */

int _strlen(char *s)
{
	int m;

	m = 0;
	while (*s != 0)
	{
		m++;
		s++;
	}
	return (m);
}
