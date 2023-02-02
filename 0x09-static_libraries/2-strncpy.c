#include "main.h"

/**
 * _strncpy - copy a string with n bytes
 * @dest: string o copy to
 * @src: string to copy from
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for (b = 0; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
