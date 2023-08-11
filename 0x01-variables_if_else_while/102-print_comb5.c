i#include <stdio.h>

/**
 * main - displays numbers 0-99
 * space between numbers
 * Return: 0
 */
int main(void)
{
int a, b, c, d, a1, a2;

a = b = c = d = 48;
while (d < 58)
{
	c = 48;
	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while a < 58)
			{
				a1 = (d * 10) + c;
				a2 = (b * 10) + a;
				if (a1 < a2)
				{
					putchar(d);
					putchar(c);
					putchar(' ');
					putchar(b);
					putchar(a);
					if (d == 57 && c == 56 && b == 57 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
