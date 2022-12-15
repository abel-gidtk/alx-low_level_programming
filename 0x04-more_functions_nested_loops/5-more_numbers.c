#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int tens;
	int ones;
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			tens = j / 10;
			ones = j % 10;
			if (j >= 10)
				_putchar(tens + '0');
			_putchar(ones + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

