#include "main.h"
/**
 * jack_bauer - will do minutes
 */
void jack_bauer(void)
{
	int f;
	int s;
	int t;
	int l;
	int o;

	f = '0';
	o = '3';
	while (f <= '2')
	{
		s = '0';
		while (s <= '9')
		{
			t = '0';
			while (t <= '5')
			{
				l = '0';
				while (l <= '9')
				{
					_putchar(f);
					if (f == '2' && s >= 3)
					{
						_putchar(o);
					}
					_putchar(s);
					_putchar(':');
					_putchar(t);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				t++;
			}
			s++;
		}
		f++;
	}
}
