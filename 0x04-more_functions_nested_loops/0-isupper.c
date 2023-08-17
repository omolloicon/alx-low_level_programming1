#include "main.h"
/**
 * _isupper - uppercase display
 *@c: integer
 * Return: 1 uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
