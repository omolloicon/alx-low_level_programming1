#include "main.h"
#include <stdio.h>

/**
 * main - display numbers from 1 to 100
 *
 *
 * Return: 0 (Done)
 */
int main(void)
{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (f % 3 == 0 && f % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (f % 5 == 0 && f % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (f % 3 == 0 && f % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (f == 1)
		{
			printf("%d", f);
		}
		else
		{
			printf(" %d", f);
		}
	}
	printf("\n");

	return (0);
}
