#include "main.h"
/**
 * jack_bauer - will do minutes
 */
void jack_bauer(void)
{
	int f;
	int s;

	for (f = 0; f <= 23; f++)
	{
		for (s = 0; s <= 59; s++)
		{
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
