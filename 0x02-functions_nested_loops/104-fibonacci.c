#include <stdio.h>

/**
 * numlength - returns the lenght of string
 * @num : operand numbers
 * Return: number of digits
 */

int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - prints the first 98 fibonaci sequences
 *
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initialos;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initialos = numlength(mx) - 1 - numlength(f1);
		while (f1o > 0 && initialos > 0)
		{
			printf("%i", 0);
			initialos--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
