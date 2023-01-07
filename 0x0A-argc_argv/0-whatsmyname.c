#include <stdio.h>
#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#endif
/**
 *main - entry program
 *@argc: first parameter
 *@argv: second parameter
 *Return: always 0
*/
int main(int UNUSED(argc), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
