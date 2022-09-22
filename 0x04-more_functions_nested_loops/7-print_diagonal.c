#include "main.h"
/**
 * print_diagonal - this will print an underscore n number of times
 *
 * @n: length of line
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n >= 1)
	{
		for (x = 1; x <= n; x++)
		{
			if (x >= 0)
			{
				for (y = 1; y < x; y++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
