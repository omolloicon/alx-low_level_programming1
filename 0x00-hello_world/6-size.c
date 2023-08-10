#include <stdio.h>
/**
 * main - C program that out outputs various computer types
 * Return: 0 (output)
 */
int main(void)
{
	int a1;
	char a2;
	float a3;
	long int a4;
	long long int a5;

printf("Size of a char: %lu byte(s) \n", sizeof(a2));
printf("Size of an  int: %lu byte(s) \n", sizeof(a1));
printf("Size of a long int: %lu byte(s) \n", sizeof(a4));
printf("Size of a long long int: %lu byte(s) \n ", sizeof(a5));
printf("Size of a float: %lu byte(s) \n ", sizeof(a3));
return (0);
}
