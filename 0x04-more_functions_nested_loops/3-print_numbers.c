#include "main.h"

/**
 *print_numbers - prints the numbers
 *from 0 to 9 using _putchar
 *Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}

	_putchar(10);
}
