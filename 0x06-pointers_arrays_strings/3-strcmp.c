#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Difference in ASCII value
 */

int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	diff = *s1 - *s2;
	return (diff);
}
