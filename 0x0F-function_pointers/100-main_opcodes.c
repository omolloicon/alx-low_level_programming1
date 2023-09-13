#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument number
 * @argv: number of pointer strings
 * Return: done 0
 *
 */

int main(int argc, char *argv[])
{
	int tally, value;
	void *f;
	char *f_link;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = main;
	f_link = f;
	for (tally = 0; tally < value; tally++)
	{
		printf("%02hhx", f_link[tally]);
		if (tally < value - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
