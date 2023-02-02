#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the address of the string to be printed
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	char *rev;

	rev = s;
	if (*rev != 0)
	{
		_print_rev_recursion(rev + 1);
		_putchar(*s);
	}

}
