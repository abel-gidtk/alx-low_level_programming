#include "main.h"

/**
 * print_diagonal - Prints diagonal of size n
 * @n: Length of diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

