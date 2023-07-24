#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: String to be counted
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

