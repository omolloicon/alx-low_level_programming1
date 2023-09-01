#include <stdlib.h>
#include <stdio.h>
#include "ctype.h"

/**
 * main - adds two positive numbers
 * @argc: check through
 * @argv: where to store values
 * Return: 0 (done)
 */

int main(int argc, char *argv[])
{
	int m, n, add;

	add = 0;
	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			for (n = 0; argv[m][n]; n++)
			{
				if (!isdigit(argv[m][n]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[m]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
