#include <stdio.h>
/**
 *main -entry program
 *@argc: first parameter
 *@argv: second parameter
 *Return: Always 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	print("%d\n", argc - 1);
	return (0);
}
