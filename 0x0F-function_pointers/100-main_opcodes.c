#include <stdlib.h>
#include <stdio.h>

/**
 * opcodes - print the opcodes of this program
 * @c: address of the main function
 * @t: number of bytes to print
 * Return: null
**/

void opcodes(char *c, int t)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%.2hhx", c[k]);
		if (k < t - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: done 0
 */

int main(int argc, char **argv)
{
	int f;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	f = atoi(argv[1]);
	if (f < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, f);
	return (0);
}
