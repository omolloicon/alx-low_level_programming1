#include <stdio.h>

/**
* main - main entry
*
* Return: 0
*/
int main(void)
{
long int e, f, h, all;

f = 1;

h = 2;

for (e = 1; e <= 50; ++e)
{
if (f != 20365011074)
{
printf("%ld, ", f);
}
else
{
printf("%ld\n", f);
}
all = f + h;
f = h;
h = all;
}

return (0);
}
