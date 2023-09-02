#include <stdio.h>
#include "main.h"

/**
 * _strcpy - to copy string
 * @dest: where to.
 * @src: where from.
 * Return: done.
 */
char *_strcpy(char *dest, char *src)
{
	int add = 0;

	while (add >= 0)
	{
		*(dest + add) = *(src + add);
		if (*(src + add) == '\0')
			break;
		add++;
	}
	return (dest);
}
