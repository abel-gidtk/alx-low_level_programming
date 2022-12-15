#include "main.h"

/**
 * _isupper - Checks whether input is uppercase
 * @c: Integer that represents character
 *
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	return (0);
}
