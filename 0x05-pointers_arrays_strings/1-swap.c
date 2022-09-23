#include "main.h"
/**
 * swap_int - this will take a pointer and update its value to 98
 *
 * @a: the pointer variable
 * @b: 2nd pointer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
