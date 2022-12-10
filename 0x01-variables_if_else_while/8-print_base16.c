#include <stdlib.h>
#include <stdio.h>
/**
 *main -entry
 *Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
