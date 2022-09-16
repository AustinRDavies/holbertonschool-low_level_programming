#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		fputs("%d is negative", n);
	}
	else if (n == 0)
	{
		fputs("%d is zero", n);
	}
	else if (n > 0)
	{
		fputs("%d is positive", n);
	}
	return (0);
}
