#include "main.h"
/**
 * print_alphabet_x10 - definition for the function
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}

