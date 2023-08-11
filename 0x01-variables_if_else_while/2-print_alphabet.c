#include <stdio.h>
/**
 * main - a c program that prints alphabets a to z
 * all alphabets will be displayed
 * Return: 0 (wow)
 */
int main(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;

	for (k = 0; k < 26; k++)
	{
		putchar(az[k]);
	}
	putchar('\n');
	return (0);
}
