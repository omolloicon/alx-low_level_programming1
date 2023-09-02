#include <unistd.h>

/**
 * _putchar - output
 * @c: string char
 *
 * Return: 1 (done) or -1 error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
