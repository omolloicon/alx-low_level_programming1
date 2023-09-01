#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: - counter
 * @argv: - array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		_putchar("program name: %s\n", *argv[0]);
	}
	else
	{
		_putchar("Program does not exists\n");
	}
	return (0);
}
