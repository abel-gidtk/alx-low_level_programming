#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
