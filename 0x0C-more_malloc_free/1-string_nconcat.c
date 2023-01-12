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
	char *ptr;
	unsigned int size_s1;
	unsigned int size_s2;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_s1 = strlen(s1);
	size_s2 = strlen(s2);
	ptr = malloc(sizeof(char) * (size_s1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size_s1; i++)
		ptr[i] = s1[i];

	l = size_s1;
	if (n >= strlen(s2))
	{
		for (j = 0; j < size_s2; j++)
		{
			ptr[l] = s2[j];
			l++;
		}
		ptr[size_s1 + size_s2] = '\0';
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			ptr[l] = s2[k];
			l++;
		}
		ptr[size_s1 + n] = '\0';
	}
	return (ptr);
}
