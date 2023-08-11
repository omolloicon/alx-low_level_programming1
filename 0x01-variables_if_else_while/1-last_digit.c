#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - c program that prints a digit stored in variable (n)
 * prints if last digit is greater than five or zero
 * also checks is less than six
 * we are using the if else loop
 * Return: 0 (great)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);

}
