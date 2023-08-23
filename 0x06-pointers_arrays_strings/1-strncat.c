#include "main.h"

 /**
 *_strncat-cating string to one
 *@dest: str 1
 *@src: str 2
 *@n: number of chars to cut
 *Return: done.
 */
char *_strncat(char *dest, char *src, int n)
{
	int t = 0, l = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (l < n && src[l] != '\0')
	{
		dest[t] = src[l];
		t++;
		l++;
	}
	dest[t] = '\0';
	return (dest);
}
