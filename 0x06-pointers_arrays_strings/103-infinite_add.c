#include "main.h"

/**
 *infinite_add - function to add two nums
 *
 *@n1: num 1.
 *@n2: num 2.
 *@r: output.
 *@size_r: length.
 *Return: sum.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, s1, s2, k, l;

	for (s1 = 0; n1[s1]; s1++)
		;
	for (s2 = 0; n2[s2]; s2++)
		;
	if (s1 > size_r || s2 > size_r)
		return (0);
	s1--;
	s2--;
	size_r--;
	for (k = 0; k < size_r; k++, s1--, s2--)
	{
		if (s1 >= 0)
			sum += n1[s1] - '0';
		if (s2 >= 0)
			sum += n2[s2] - '0';
		if (s1 < 0 && s2 < 0 && sum == 0)
			break;
		r[k] = sum % 10 + '0';
		sum /= 10;
	}
	r[k] = '\0';
	if (s1 >= 0 || s2 >= 0 || sum)
		return (0);
	for (k--, l = 0; k > l; k--, l++)
	{
		add = r[k];
		r[k] = r[l];
		r[l] = add;
	}
	return (r);
}
