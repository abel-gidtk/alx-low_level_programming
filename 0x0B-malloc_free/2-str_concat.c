#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to concatenated string NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = size1;
	k = 0;
	while (j < (size2 + size1))
	{
		ptr[j] = s2[k];
		j++;
		k++;
	}
	ptr[size1 + size2 + 1] = '\0';
	return (ptr);
}
