#include "main.h"

/**
 * _sqrt - square root
 * @k: value to enter
 * @val: procedure value
 *
 * Return: squareroot , -1
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
 * _sqrt_recursion - returns naturalto num sqrt
 * @n: value to enter
 *
 * Return: num square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
