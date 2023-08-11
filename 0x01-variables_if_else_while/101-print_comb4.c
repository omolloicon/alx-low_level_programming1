#include <stdio.h>

/**
 * main - three different combition of number
 *
 * Return: 0 (Done)
 */

int main(void)
{
	int j; /*represnts ones*/
	int k; /*represent tens*/
	int l; /*represents hundreds*/

	for (l = '0'; l <= '9'; l++)
	{
		for (k = (l + 1); k <= '9'; k++)
		{
			for (j = (k + 1); j <= '9'; j++)
			{
				putchar(l);
				putchar(k);
				putchar(j);
				if (l != '7' || k != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
