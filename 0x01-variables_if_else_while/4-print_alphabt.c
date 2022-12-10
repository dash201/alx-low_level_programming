#include <stdlib.h>
#include <stdio.h>
/**
 *main -entry
 *Return: always 0
 */
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
