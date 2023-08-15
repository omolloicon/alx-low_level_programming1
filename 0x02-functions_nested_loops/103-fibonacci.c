#include <stdio.h>

/**
 * main - main entry
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 1, a3;
	float a4;

	while (1)
	{
		a3 = a1 + a2;
		if (a3 > 4000000)
			break;

		if ((a3 % 2) == 0)
			a4 += a3;

		a1 = a2;
		a2 = a3;
	}
	printf("%.0f\n", a4);

	return (0);
}
