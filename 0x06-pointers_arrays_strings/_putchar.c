#include <unistd.h>

/**
 * _putchar - Writes the chatacter c to stdout
 * @c: char to be printed
 * Return: 1 (on Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
