#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - print a name
 *@name: name
 *@f: pointer of function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
