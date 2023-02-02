#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime
 * factor of the number 612852475143
 * Return: Always 0.
 */

int main(void)
{
	long a;
	long b = 612852475143;

	for (a = 2; a < b; a++)
	{
		if (b % a == 0)
		b = b / a;
	}
	printf("%li\n", b);

	return (0);
}
