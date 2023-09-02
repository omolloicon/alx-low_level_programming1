#include "main.h"

/**
 * _strlen - string length
 * @s: first character
 *
 * Return: done
 */
int _strlen(char *s)
{
	int add;

	add = 0;
	/* counts the number of iterations */
	while (s[add] != '\0')
	{
		add = add + 1;
	}
	return (add);
}
