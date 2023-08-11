#include <stdio.h>

/**
 * main - c program that print that double combination
 * a represent ones and b tens
 * Return: 0 (wonderful)
 */

int main(void)
{
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = (b + 1); a <= '9'; a++)
		{
			putchar(b);
			putchar(a);

			if (b != '8' || a != '9') /*comma output*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
