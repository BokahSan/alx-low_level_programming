#include "main.h"


/**
 * print_line - print a line of '_'.
 *
 *@n: numbers of times '_' is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
