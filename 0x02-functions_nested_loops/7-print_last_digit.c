#include "main.h"
/**
 * _abs - defintion for the function
 *
 * @n: int for the number entered
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	return (x + '0');
}
