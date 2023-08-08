#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *combined;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	combined = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		combined[i] = s1[i];
	}
	for (j = 0; j < strlen(s2); j++)
	{
		combined[i] = s2[j];
		i++;
	}
	return (combined);
}
