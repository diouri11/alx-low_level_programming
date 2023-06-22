#include "main.h"

/**
 * main - check if the char is upper or lower case
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
*/

int _isupper(int c)
{
	int c;
	int i;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
