#include "main.h"
/**
 * more_numbers - will print 0-14
 */
void more_numbers(void)
{
	int c;
	int x;

	for (c = '0'; c <= 9; x++)
	{
		x = '0';
		for (x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}		
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
