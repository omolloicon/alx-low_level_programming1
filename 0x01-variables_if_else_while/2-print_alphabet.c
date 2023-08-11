#include <stdio.h>
/**
 * main - c code that prints a to z.
 * the alphabets are 26
 * Return: 0 (good)
 */
int main(void)
{
	char atoz[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;

	for (k = 0; k < 26; k++)
	{
		putchar(atoz[k]);
	}
	putchar('\n');

	return (0);

