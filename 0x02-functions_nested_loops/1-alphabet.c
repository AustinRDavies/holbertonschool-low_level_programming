#include "main.h"
/**
 * main - entry point
 *
 * Return - Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alpahbet(void)
{
	char x;

	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
}
