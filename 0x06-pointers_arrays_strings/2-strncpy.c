#include "main.h"

/**
 *_strncpy - copying chatracters from one str to another
 *@dest: string, where to
 *@src: string source
 *@n: number of bytes
 *Return: done
 */

char *_strncpy(char *dest, char *src, int n);
{
	int r = 0, s = 0;

	while (n > s)
	{
		if (src[s] == '\0')
		{
			for (; s < n; s++)
			{
				dest[r] = '\0';
			}
			r++;
		}
	}
	else
	{
		dest[r] = src[s];
		r++;
		s++;
	}

	return (dest);
}
