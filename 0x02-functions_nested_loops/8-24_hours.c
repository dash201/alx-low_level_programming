#include "main.h"
int length_nb(int n);
/**
 *jack_bauer - prints every minute of the day
*/
void jack_bauer(void)
{
	int a, b, i, j;

	for(a = 0; a <= 2; a++)
	{
		for(b = 0; b <= 9 ; b++)
		{
	    	for(i = 0; i <= 5; i++)
	    	{
            	for(j = 0; j <= 9; j++)
            	{
                	if (((a * 10) + b) <= 23 && ((i * 10) + j) < 60)
                        _putchar(a + '0');
                        _putchar(b + '0');
                        _putchar(i + '0');
                        _putchar(j + '0');
                        _putchar('\n');
                }
            }
    	}
	}
}
