#include "main.h"
/**
 * _isupper - check for upper case
 *@c: interger dsplay
 * Return: 0 (done)
 *
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
