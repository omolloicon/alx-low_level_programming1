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

	for (k = 98; k < 124; k++)
	{
		if (k != 102 && k != 114)
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
