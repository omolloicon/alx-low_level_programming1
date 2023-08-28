#include "main.h"

/**
 * _strstr - string to substring
 * @haystack: under search of substring
 * @needle: where to at
 * Return: return character  to the beggining of the string
 */

char *_strstr(char *haystack, char *needle)
{
	int m;

	while (*haystack != '\0')
	{
		m = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, m++;
		if (*needle == '\0')
			return (haystack - m);
		haystack -= (m - 1), needle -= m;
	}
	return ('\0');
}
