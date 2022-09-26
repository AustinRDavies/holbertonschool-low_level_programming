#include "main.h"
/**
 * _strlen - counts the length of the string
 *
 * @s: the string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)

	_putchar((i / 10) + '0');
	if (i > 9)
	{
		_putchar((i % 10) + '0');
	}
	return (0);
}
