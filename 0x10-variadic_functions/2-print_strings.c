#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string
 * @n: string number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int pos;
	char *value;


	va_start(count, n);

	pos = 0;
	for (pos = 0; pos < n; pos++)
	{
		value = va_arg(count, char *);
		if (value)
			printf("%s", value);
		else
			printf("(nil)");
		if (pos < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(count);
	printf("\n");
}
