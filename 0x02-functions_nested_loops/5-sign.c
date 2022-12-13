#include "main.h"
/**
 *print_sign -print sign of the numbze
 *@n: parameter
 *Return: 1 in success
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
