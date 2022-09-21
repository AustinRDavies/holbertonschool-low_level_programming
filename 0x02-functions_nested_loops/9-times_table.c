#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: returns nothing
 */
void times_table(void)
{
	int n;
	int t;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (t = 0; t <= 9; t++)
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
