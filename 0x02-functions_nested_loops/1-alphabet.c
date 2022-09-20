#include "main.h"
/**
 * main - entry point
 *
 * Return - Always 0 (success)
 */
int main(void)
{
	char x;

	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alpahbet(void)
{
	for(x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
}
