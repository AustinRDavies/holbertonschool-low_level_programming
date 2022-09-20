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
	int x;

	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		x = n * -1;
		_putchar(n);
	}
	return (0);
}
