#include "3-calc.h"
#include <stdlib.h>
/**
 *main - entry of program
 *@argc: first parameter
 *@argv: second parameter
 *Return: 0;
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argc != 4)
		return (1);
	get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
