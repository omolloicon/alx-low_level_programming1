#include "main.h"
/**
 * rot13 - function str encoder
 * t: string to process.
 * Return: done encoding
 */

char *rot13(char *t)
{
	int start = 0, k;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(t + start) != '\0')
	{
		for (k = 0; k < 52; k++)
		{
			if (*(t + start) == alph[k])
			{
				*(t + start) = rot13[k];
				break;
			}
		}
		start++;
	}

	return (t);
}
