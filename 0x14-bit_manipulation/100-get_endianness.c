#include "main.h"

/**
 * get_endianness - search for ensians
 * Return: 0 if succes, else -1
 */

int get_endianness(void)
{
	int t = 1;
	char *stp = (char *)&t;

	if (*stp == 1)
		return (1);

	return (0);
}
