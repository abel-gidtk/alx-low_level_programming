#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
