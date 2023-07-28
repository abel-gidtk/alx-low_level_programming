#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 0 if equal 15 if s1 > s2 -15 if s2 > s1
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 > s2)
		return (15);
	return (-15);
}
