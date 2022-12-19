#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String input
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int count = 0;
	int i= 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}
	return (count);
}
