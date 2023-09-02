#include "main.h"

/**
 * _strcmp - strings comparizon
 *
 *@s1: first str.
 *@s2: second str.
 *Return: done.
 */

int _strcmp(char *s1, char *s2)
{
	int t = 0, check = 0;

	while (s1[t] != '\0' && s2[t] != '\0' && check == 0)
	{
		check = s1[t] - s2[t];
		t++;
	}

	return (check);
}
