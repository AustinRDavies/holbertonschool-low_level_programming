#include "main.h"
/**
 * main - entry point
 *
 * Return - Always 0 (success)
 */
int main(void)
{
	char x;

	print_alphabet(x);
	_putchar('\n');
	return (0);
}

void print_alpahbet(char)
{
	for(char = 'a'; char <= 'z'; char++)
	{
		putchar (char);
	}
}
