#include <stdio.h>

/**
 * main - prints argument number passed into it
 * @argv: array
 * @argc: count
 * Return: 0 done
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
