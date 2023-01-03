#include "main.h"

/**
 * 2-print_alphabet_x10 - entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char c = ('a');
	int d = 0;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
