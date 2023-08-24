#include "main.h"

/**
 *leet - to show the string encoding.
 *@t: strind being peocessed.
 *Return: done.
 */

char *leet(char *t)
{
	int m, n;
	char alpha[5] = {'a', 'e', 'o', 't', 'l'};
	char swich[5] = {'4', '3', '0', '7', '1'};

	for (m = 0; t[m] != '\0'; m++)
	{
		for (n = 0; n < 5; n++)
		{
			if (t[m] == alpha[n] || t[m] == alpha[n] - 32)
			{
				t[m] = swich[n];
			}
		}
	}
	return (t);
}
