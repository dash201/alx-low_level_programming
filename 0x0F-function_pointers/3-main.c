#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry of program
 *@argc: first parameter
 *@argv: second parameter
 *Return: 0;
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "*") == 0 ||
	    strcmp(argv[2], "-") == 0 || strcmp(argv[2], "/") ==0 ||
	    strcmp(argv[2], "%") == 0)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
	    atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
