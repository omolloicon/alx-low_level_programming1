#include "main.h"

/**
 * _sqrt - checks for perfect square root
 * @k: squareroot number
 * @val: the nember being checked
 *
 * Return: the value of the square root
 * -1 if not perfect squareroot
 */
int _sqrt(int k, int val)
{
	if (k * k == val)
		return (k);
	if (k * k > val)
		return (-1);
	return (_sqrt((k + 1), val));
}

/**
 * _sqrt_recursion - returns natural square
 * @n: the integer to check
 *
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
