#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: arguments number
 * @...: conituity
 * Return: sucess
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list coun;
	unsigned int pos;
	int sum = 0;

	va_start(coun, n);

	for (pos = 0; pos < n; pos++)
		sum += va_arg(coun, int);
	va_end(coun);

	return (coun);
}
