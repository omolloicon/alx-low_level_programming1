#include "main.h"

/**
 *leet - to show the string encoding..
 *@s: strind being peocessed.
 *Return: done.
 */

char *leet(char *s)
{
	int k = 0, j = 0;

	char array_leet[] = {'4', '3', '1', '0', '7'};

	char array_up[] = {'A', 'E', 'L', 'O', 'T'};

	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[k] != '\0')
	{
		for (l = 0; l < 5; l++)
		{
			if (s[k] == array_low[l] || s[k] == array_up[l])
				s[k] = array_leet[l];
		}
		k++;
	}
	return (s);
}
