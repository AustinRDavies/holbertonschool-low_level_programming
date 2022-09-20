#include "main.h"
/**
 * print_sign - defintion for the function
 *
 * @n: int for the number entered
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar(n);		
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
