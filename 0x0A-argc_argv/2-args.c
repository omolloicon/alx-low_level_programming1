#include <stdio.h>

/**
 * main - dispays arguments it recieves
 * @argc: count
 * @argv: value
 * Return: 0 (done)
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
