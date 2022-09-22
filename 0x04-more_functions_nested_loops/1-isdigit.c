#include "main.h"
/**
 * _isdigit - this will check if the variable is a digit..
 *
 * @c: the digit that will be checked
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
