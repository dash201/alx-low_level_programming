#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@str: parameter
 *Return: integer
*/
int _atoi(char *str)
{
	int a = 0, nb = 0, i = 1, n = 0;

	for (a = 0; ((str[a] != '\0') && (str[a] < '0')) || (str[a] > '9'); a++)
		(str[a] == '-') ? i = i * -1 : 0;
	while ((str[a] >= '0') && (str[a] <= '9'))
	{
		n = (n * 10) + (str[a] - 48);
		if (!((n < 0 || n > 2147483647) && i != -1))
			nb = n;
		else
			return (0);
		a++;
	}
	return (nb * i);
}
