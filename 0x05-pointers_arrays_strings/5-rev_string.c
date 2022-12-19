#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int count = strlen(s);

	while (i < count)
	{
		_putchar(s[i]);
		i++;
	}
}
