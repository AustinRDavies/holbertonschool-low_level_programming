#include "main.h"
/**
 * print_line - this will print an underscore n number of times
 *
 * @n: the number of times an underscore will be printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int x;
	
	if (n >= 1)
	{
		for (x = 0 ; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
