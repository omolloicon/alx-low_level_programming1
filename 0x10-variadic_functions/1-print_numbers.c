#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: argumests number
 * @n: integer number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int pos;

	va_start(count, n);

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", va_arg(count, int));
		if (separator)
		{
			if (pos < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(count);
	printf("\n");
}
