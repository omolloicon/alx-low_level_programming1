#include "main.h"

/**
 *reverse_array - to reverse an an array
 *@a: this is our aray
 *
 *@n: this is the array length
 */

void reverse_array(int *a, int n);
{
	int m, k, store;

	k = n - 1;
	for (m = 0; m < n / 2; m++)
	{
		store = a[m];
		a[m] = a[k];
		a[k] = store
			k--;
	}
}
