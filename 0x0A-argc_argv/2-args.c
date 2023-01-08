#include <stdio.h>
/**
 *main - entry program
 *@argc: first parameter
 *@argv: second parameter
 *Return: always 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
