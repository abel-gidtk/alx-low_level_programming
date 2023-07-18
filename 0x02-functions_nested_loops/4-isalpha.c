#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Check if a character is a letter
 * @c: Character to be checked
 *
 * Return: 1 if letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
