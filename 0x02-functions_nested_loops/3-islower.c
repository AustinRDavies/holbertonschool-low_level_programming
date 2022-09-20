#include "main.h"
/**
 * _islower - definition of the function.
 *
 * int c - int for the character
 *
 * Return: 1 if lowercase, 0 if non-lowercase eter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
