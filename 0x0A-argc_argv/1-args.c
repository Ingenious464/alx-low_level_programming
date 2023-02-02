#include <stdio.h>
#include <stdlib.h>

/**
 * main - the number of arguments passed into it
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);

	return (0);
}
