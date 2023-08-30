#include "main.h"

/**
 * _length - prints string length
 * @s: the string under process
 *
 * Return: string size
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * _verify - string comparizon
 * @s: string under process
 * @len: value one
 * @count: value n,to show its the biggest
 *
 * Return: done
 */
int _verify(char *s, int size, int tally)
{
	if (tally >= size)
		return (1);
	if (s[size] == s[tally])
		return (_verify(s, size - 1, tally + 1));
	return (0);
}

/**
 * is_palindrome - identify palindrome
 * @s: this is string under process
 *
 * Return: done
 */
int is_palindrome(char *s)
{
	int size = _length(s);
	int tally = 0;

	return (_verify(s, size - 1, tally));
}
