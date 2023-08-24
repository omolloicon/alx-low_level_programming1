#include "main.h"

/**
 * cap_string - capitalise words in a string
 * @t: the string to work on
 *
 * Return: done
 */
char *cap_string(char *t)
{
	int m, last;

	for (m = 0; t[m] != '\0'; m++)
	{
		last = m - 1;
		if (t[m] >= 'a' && t[m] <= 'z')
		{
			if (m == 0)
			{
				t[m] = t[m] - 32;
			}
			else if (t[last] == ' ' || t[last] == '\t')
			{
				t[m] = t[m] - 32;
			}
			else if (t[last] == '\n' || t[last] == ',')
			{
				t[m] = t[m] - 32;
			}
			else if (t[last] == ';' || t[last] == '.')
			{
				t[m] = t[m] - 32;
			}
			else if (t[last] == '!' || t[last] == '?')
			{
				t[m] = t[m] - 32;
			}
			else if (t[last] == '"' || t[last] == '(')
			{
				t[m] = t[m] - 32;
			}
			else if (t[last] == ')' || t[last] == '{' || t[last] == '}')
			{
				t[m] = t[m] - 32;
			}
		}
	}
	return (t);
}
