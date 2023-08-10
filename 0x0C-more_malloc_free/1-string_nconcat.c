#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 *
 * Return: Pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *combined;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	combined = malloc(strlen(s1) + n + 1);
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		combined[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		combined[i] = s2[j];
		i++;
	}

	return (combined);
}
