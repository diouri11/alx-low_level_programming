#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int a, c;

	for (a = 0; a < n; a++)
	{
		for (c = 0; c < a; c++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}


