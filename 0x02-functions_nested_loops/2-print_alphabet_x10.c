#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alpha, x;

	for (x = 0; x < 10; x++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
