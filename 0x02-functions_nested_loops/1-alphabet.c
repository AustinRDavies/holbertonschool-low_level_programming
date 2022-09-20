#include "main.h"
/**
 * main - entry point
 *
 * Return - Always 0 (success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	_putchar('\n');
	return (0);
}

