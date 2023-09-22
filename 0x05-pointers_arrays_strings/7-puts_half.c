#include "main.h"


/**
 * puts_half - Print half of string.
 *
 * @str: Type char pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}