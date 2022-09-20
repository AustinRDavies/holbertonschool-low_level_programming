#include "main.h"
/**
 * _isalpha - definition of the function.
 *
 * @c: int for the character
 *
 * Return: 1 if letter, 0 if non-letter.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
