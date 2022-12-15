#include "main.h"

/**
 * _isdigit - Checks whether input is a digit
 * @c: Integer to be checked
 *
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
