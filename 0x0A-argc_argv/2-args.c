#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments it receives
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
