#include "main.h"

/**
 * _strspn - to identify string size
 * @s: under investigation
 * @accept: identify similar characters
 * Return: total number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l, sa = 0, si = 0;

	while (accept[sa] != '\0')
		sa++;
	for (k = 0; s[k] != '\0'; k++)
		for (l = 0; l < sa; l++)
			if (s[k] == accept[l])
				si++, l = sa;
			else
				if (l == sa - 1)
					goto exit;
exit: return (si);
}
