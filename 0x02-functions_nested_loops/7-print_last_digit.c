#include "main.h"

/**
 * print_last_digit - beginning of program
 * @n: integer to be evaluated
 * Return: n
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else if (n == 0)
	{
		_putchar(n + 48);
		return (n);
	}
	else
	{
		_putchar(48 + (l * (-1)));
		return (l * (-1));
	}
}
