#include "main.h"
/**
 * main - entry point
 *
 * Return - Always 0 (success)
 */
void print_alphabet()
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
}

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

