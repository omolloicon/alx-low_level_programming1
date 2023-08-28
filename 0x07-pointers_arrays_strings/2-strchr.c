#include "main.h"
#define NULL 0

/**
 * _strchr - searches for charater in string
 * @s: input
 * @c: what to search
 *
 * Return: return c to first occurence
 * otherwie NULL
 */
char *_strchr(char *s, char c)
{
	int h = 0;

	while (s[h] != '\0')
	{
		if (s[h] == c)
		{
			return (s + h);
		}
		h++;
	}
	if (c == '\0')
		return (s + h);
	return (NULL);
}
