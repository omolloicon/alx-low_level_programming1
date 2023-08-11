#include <stdio.h>

/**
 * main - c program that prints alphabes
 * they are small letters
 * and also captal letters
 * Return: 0 (Output)
 */
int main(void)
{
char atoz[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l;

	for (l = 0; l < 52; l++)
	{
		putchar(atoz[l]);
	}
	putchar('\n');
	return (0);
}
