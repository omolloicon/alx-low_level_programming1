#include <stdio.h>

/**
 * main - c program that prints alphabes
 * prints (26) alphabes in small letters
 * it prints the same in capital
 * Return: 0 (Output)
 */
int main(void)
{
char atoz[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l;

	for (l = 0; l < 52; l + 1)
	{
		putchar(atoz[l]);
	}
	putchar('\n');
	return (0);
}
