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
	
	f = 0;
	while (f <= '2')
	{	
		s = 0;
		while (s <= '3')
		{
			t = 0;
			while (t <= '5')
			{
				l = 0;
				while (l <= '9')
				{
					_putchar(f);
					_putchar(s);
					_putchar(':');
					_putchar(t);
					_putchar(l);
					l++;
				}
				t++;
			}
			s++;
		}
		f++;
	}
}
