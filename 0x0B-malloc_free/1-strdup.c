#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Allocates memory, which contains copy of a string
 * @str: String
 *
 * Return: Pointer to string NULL if fail
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size = strlen(str);

	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL || str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
