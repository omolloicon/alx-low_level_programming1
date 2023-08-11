#include <stdio.h>

/**
 * main -c program to print numbers between 0 to 9
 * and letters between a to f
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
