#include "main.h"
/**print_rev - prints a string in reverse
 *@s: parameter
*/
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i <= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
