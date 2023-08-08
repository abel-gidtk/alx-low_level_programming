#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - A newly allocated space in memory which contains a copy of str
 * @str: String
 *
 * Return: Pointer to string copy
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *strCopy;

	if (str == NULL)
		return (NULL);
	strCopy = (char *)malloc(strlen(str));
	if (strCopy == NULL)
		return (NULL);
	for (i = 0; i <= strlen(str); i++)
	{
		strCopy[i] = str[i];
	}
	return (strCopy);
}
