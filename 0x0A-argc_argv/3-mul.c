#include <stdio.h>
/**
 *main - entry program
 *@argc: first parameter
 *@argv: second parameter
 *Return: 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	r = argv[1] * argv[2];
	printf("%d\n", r);
	return (0);
}
