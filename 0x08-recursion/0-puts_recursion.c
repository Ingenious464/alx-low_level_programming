#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s);
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_puts_recursion(*s + 1);
	}
}
