#include "main.h"
/**
 *rev_string -reverses a string
 *@s: parameter
*/
void rev_string(char *s)
{
	int i = _strlen(&(*s)) - 1;
	char c[];

	while (i >= 0)
	{
		c = s[i];
		i = i - 1;
	}
	*s = c;
}
