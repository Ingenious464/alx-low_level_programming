#include "main.h"

/**
 * print_line - beginning of program
 * @n: number of characters the line will be
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
	}

	_putchar(10);
}
