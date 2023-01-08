#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 *ismember -  veriify the string
 *@str: parammeter
 *Return: 0 or 1
*/
int isnumber(char * str)
{
	int a = 0;
	if (str[0] == '-' || str[0] == '+')
		a = 1;
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < '0' || str[a] > '9')
			return (1);
	}
	return (0);
}
/**
 *main - entrey program
 *@argc: first parameter
 *@argv: second parameter
 *Return:0 or 1
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int nb = 0; int a;

	if (argc == 1)
                printf("0\n");
	else
	{
		for (a = 1; argv[a] != NULL; a++)
		{
			if (isnumber (argv[a]) == 1)
			{
				printf ("Error\n");
				return (1);
			}
			nb = nb + atoi (argv[a]);
		}
		printf ("%d\n", nb);
	}
	return (0);
}
