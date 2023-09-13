#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - function to display name
 *@name: name
 *@f: links to name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	(f)(name);
}
