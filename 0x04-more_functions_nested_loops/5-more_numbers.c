#include "mainn.h"

/**
 * more_numbers - function to print numbers
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
