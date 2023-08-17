#include "main.h"
#include <stdio.h>

/**
 * main - display number from 0 to 100
 *
 * Return: 0 (done)
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 3 == 0 && y % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (y % 5 == 0 && y % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (y % 3 == 0 && y % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (y == 1)
		{
			printf("%d", y);
		}
		else
		{
			printf(" %d", y);
		}
	}
	printf("\n");

	return (0);
}
