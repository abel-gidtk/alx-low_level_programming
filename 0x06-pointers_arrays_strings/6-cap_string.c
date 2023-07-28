#include "main.h"

/**
 * check_punc1 - Check if character is one of the separators
 * @c: Character to be checked
 *
 * Return: 1 if separator -1 if not
 */
int check_punc1(char c)
{
	if (c == 33 || c == 34 || c == 40 || c == 41 || c == 44 || c == 46 || c == 59)
	{
		return (1);
	}
	return (-1);
}
/**
 * check_punc2 - Check if character is one of the separators
 * @c: Character to be checked
 *
 * Return: 1 if separator -1 if not
 */
int check_punc2(char c)
{
	if (c == 63 || c == 123 || c == 125 || c == '\n' || c == '\t' || c == ' ')
	{
		return (1);
	}
	return (-1);
}
/**
 * cap_string - Capitalized all words of a string
 * @str: String
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (check_punc1(str[i]) == 1 || check_punc2(str[i]) == 1)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
