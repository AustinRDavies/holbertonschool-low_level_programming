#include "main.h"
/**
 * print_numbers - will print 0-9
 *
 * @x: increasing number variable
 *
 * Return: void
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
