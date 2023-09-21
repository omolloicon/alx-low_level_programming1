#include <stdio.h>
void show(void)__attribute__((constructor));

/**
 * show - displays sentence then main char
 *
 */

void show(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
