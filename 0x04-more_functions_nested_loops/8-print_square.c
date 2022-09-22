#include "main.h"
/**
 * print_square - this will print a square of int size
 *
 * @size: size of square
 *
 * Return: 0
 */
void print_square(int size)
{
	int x;
	int y;

	if (size >= 1)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
