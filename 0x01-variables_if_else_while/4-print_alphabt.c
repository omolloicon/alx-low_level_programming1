#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints alphabets excluding q and e
 * prints individual characters
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 97; k < 123; k++)
	{
		if (k != 101 && k != 113)
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
