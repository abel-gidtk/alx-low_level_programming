#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: String to be halved
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count = strlen(str);

	if (count % 2 == 0)
	{
		int j = count / 2;

		while (j < count)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		int k = ((count - 1) / 2) + 1;

		while (k < count)
		{
			_putchar(str[k]);
			k++;
		}
	}
	_putchar('\n');
}

