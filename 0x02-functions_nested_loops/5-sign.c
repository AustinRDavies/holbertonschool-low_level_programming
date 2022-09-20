#include "main.h"
/**
 * print_sign - defintion for the function
 *
 * @a - int for the number entered
 *
 * Return: 1 for greater and zero, 0 if zero, -1 if lest than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	return(/);
}
