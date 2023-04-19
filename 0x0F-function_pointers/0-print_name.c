#include <stdio.h>
/**
 * print_name - calls a function toprint a name
 * @name: stores name to print
 * @f: stores the callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
