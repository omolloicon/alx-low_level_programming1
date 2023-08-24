#include "main.h"
/**
 * rot13 - function str encoder
 * @t: string to process.
 * Return: done encoding
 */

char *rot13(char *t)
{
	int m, n;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char swich[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	m = 0;

	while (t[m] != '\0')
	{
		n = 0;
		while (letter[n] != '\0')
		{
			if (t[m] == letter[n])
			{
				t[m] = swich[n];
				break;
			}
			n++;
		}
		m++;
	}
	return (t);
}
