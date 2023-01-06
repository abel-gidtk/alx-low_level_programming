#include "main.h"

/**
 * _isalpha - Checks if input is an alphabet
 * @c: Character to be checked
 *
 * Return: 1 if alphabet else 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
		return (1);
	return (0);
}
