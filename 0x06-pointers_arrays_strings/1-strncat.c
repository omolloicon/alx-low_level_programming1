#include "main.h"
/**
 *_strncat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, m = 0;

	while (dest[j] != '\0')
		j++;
	while (src[m] != '\0' && n > m)
	{
		dest[j] = src[m];
		m++;
		j++;
	}
	if (n > 0)
	{
		dest[j] = '\0';
	}
	return (dest);
}
