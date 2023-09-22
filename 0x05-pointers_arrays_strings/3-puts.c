#include "main.h"



/**
 * _puts - Print a string, followed by a new line, to stdout.
 *
 * @str: Type char pointer
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;
	int let;

	for (i = 0; str[i] != 0; i++)
	{
		let = str[i];
		_putchar(let);
	}
	_putchar('\n');
}
