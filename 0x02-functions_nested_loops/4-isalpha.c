#include "main.h"

/**
 * _isalpha - alphabets cheking
 * @c: the check for alphabet character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
