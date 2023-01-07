#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: str 1 to compare
 * @s2: str 2 to compare
 * Return: diff of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
