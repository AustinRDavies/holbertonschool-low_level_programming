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
	int a;

	a = -1;
	if (n < 0)
	{
		n = a * n;
		_putchar(n);		
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
