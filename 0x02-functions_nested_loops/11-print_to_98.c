#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - will print number counting from n to 98
 *
 * @n: starting number
 *
 * return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
