#include "main.h"
/**
 * more_numbers - will print 0-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int x;
	int y;
	int z;

	for (c = '1'; c <= 10; x++)
	{
		for (x = '0'; x <= 14; x++)
		{
			y = x % 10;
			z = x / 10;
			if (x > 9)
			{
				_putchar(z + '0');
			}
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
