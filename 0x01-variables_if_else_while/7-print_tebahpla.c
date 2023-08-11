#include <stdio.h>

/**
 * main - c program prints alphabets in reverse
 * after the alphabet a new line is displayed
 * Return: 0 (Output)
 */
int main(void)
{
	char j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
