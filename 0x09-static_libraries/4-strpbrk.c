#include "main.h"

/**
 * _strpbrk - look for a matching character in exam
 * @s: string to understand
 * @accept: character identifier
 * Return: done
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, m;

	for (k = 0; s[k] != '\0'; k++)
		for (m = 0; accept[m] != '\0'; m++)
			if (s[k] == accept[m])
				goto exit;
exit: return (s[k] != '\0' ? s + k : '\0');
}
