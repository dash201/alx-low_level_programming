#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry program
 *@argc: first parameter
 *@argv: second parameter
 *Return: 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int r;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	r = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", r);
	return (0);
}
