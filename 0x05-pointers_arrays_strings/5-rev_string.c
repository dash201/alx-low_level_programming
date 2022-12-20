#include "main.h"
/**
 *rev_string -reverses a string
 *@s: parameter
*/
void rev_string(char *s)
{
	int i = _strlen(&(*s)) - 1;
	char c[i + 2];

	while (i >= 0)
	{
		c[i] = s[i];
		i = i - 1;
	}
	c[_strlen(&(*s))] = '\0';
	*s = c;
}
