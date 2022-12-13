#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
