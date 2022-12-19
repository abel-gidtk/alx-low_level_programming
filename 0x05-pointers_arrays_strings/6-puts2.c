#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String input
 *
 * Return: void
 */

void puts2(char *str)
{
	int count  = strlen(str);
	int i = 0;

	while (i < count)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
