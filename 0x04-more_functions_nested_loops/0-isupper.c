#include <stdio.h>

/**
 *
 * main - check if the char is upper or lower case
 *
 * Returnn: Always 0.
*/

int _isupper(int c)
{
	int c;
	int i;

	if (c >= 65 && c <= 95)
	{
		i = 1;
	}
	else
	{
	i = 0;
	}
return (i);
}
