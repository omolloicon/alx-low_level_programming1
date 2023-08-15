#include <stdio.h>

/**
* main-computes and print the sum of all the multiples
* of 3 or 5 below 1024
* Return: 0 if sucessful
*/
int main(void)
{
unsigned long int s1, s2, s3;
int j;

s1 = 0;
s2 = 0;
s3 = 0;

for (j = 0; j < 1024; ++j)
{
if ((j % 3) == 0)
{
s1 = s1 + j;
}
else if ((j % 5) == 0)
{
s2 = s2 + j;
}
}
s3 = s1 + s2;
printf("%lu\n", s3);
return (0);
}
