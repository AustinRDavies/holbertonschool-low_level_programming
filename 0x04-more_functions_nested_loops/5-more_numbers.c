#include "main.h"
/**
 * more_numbers - will print 0-14
 */
void more_numbers(void)
{
	int x;

	for (x = '0'; x <= 14; x++)
	{
		if (x <= 10)
		{
			_putchar((x / 10) + '0');
		}
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
}
