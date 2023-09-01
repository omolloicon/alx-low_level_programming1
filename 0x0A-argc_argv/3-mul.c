#include <stdio.h>
/**
 * main - program that multiplies two numbers.
 * @argc: check through
 * @argv: value
 * Return: 0 (done)
 */

int main(int argc, char *argv[])
{
	int m, n, prod;

	if (argc <= 3)
	{

		m = atoi(argv[1]);
		n = atoi(argv[2]);
		prod = m * n;
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
