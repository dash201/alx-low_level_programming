#include <stdlib.h>
#include <stdio.h>
/**
 *main -entry
 *Return: always 0
 */
int main(void)
{
	char i = 97;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
