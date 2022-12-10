#include <stdio.h>
#include <stdlib.h>
/**
 *main -entry
 *Return: 0
 */
int main(void)
{
	char c = 65;
	char i = 97;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
