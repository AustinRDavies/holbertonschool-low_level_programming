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
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	printf("Last digit of %d ", n);
	printf("is ");
	if (i > 5)
	{
		printf("%d and is greater than 5\n", i);
	}
	else if (i < 6)
	{
		if (i == 0)
		{
			printf("%d and is 0\n", i);
		}
		else
		{
			printf("%d is less than 6 and not 0\n", i);
		}
	}
	return (0);
}
