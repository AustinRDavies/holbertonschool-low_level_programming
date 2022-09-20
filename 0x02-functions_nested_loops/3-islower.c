#include "main.h"
/**
 * islower - definition of the function.
 * 
 * Return - 1 if lowercase, 0 if non-lowercase eter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
