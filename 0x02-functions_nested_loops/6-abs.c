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

	if (n >= 0)
	{
		_putchar(n);
	}
	else if (n > 0)
	{
		a = (-1) * n; 
		_putchar(a);
	}
}
