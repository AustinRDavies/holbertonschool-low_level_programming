#include "main.h"
/**
 * times_table - prints the 9x9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int n;
	int t;
	int o;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (t = 1; t <= 9; t++)
		{
			_putchar(',');
			_putchar(' ');
			o = n * t;
			if (o <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((o / 10) + '0');
			}
			_putchar((o % 10) + '0');
		}
		_putchar('\n');
	}
}
