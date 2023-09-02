#include "main.h"

/**
 *_strcat-joining strings
 *
 *@dest: str 1
 *@src: str 2
 *Return: concatenate.
 */

char *_strcat(char *dest, char *src)
{
	int p = 0, l = 0;

	while (dest[p] != '\0')
		p++;
	while (src[l] != '\0')
	{
		dest[p] = src[l];
		p++;
		l++;
	}

	dest[p] = '\0';

	return (dest);
}
