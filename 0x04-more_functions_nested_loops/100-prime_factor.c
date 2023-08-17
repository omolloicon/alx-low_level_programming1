#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int j;
	long int high;
	long int k;


	j = 612852475143;
	high = -1;
	while (j % 2 == 0)
	{
		high = 2;
		j /= 2;
	}
	for (k = 3; k <= sqrt(j); k = k + 2)
	{
		while (j % i == 0)
		{
			high = k;
			j = j / k;
		}
	}
	if (j > 2)
		high = j;
	printf("%ld\n", high);
	return (0);
}
