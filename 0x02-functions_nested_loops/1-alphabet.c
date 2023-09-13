#include "main.h"


/**
 *print_alphabet - display alphabets lowercase
 *
 * Return : void
 */
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alpha[i] != '\0')
	{
		_putchar(alpha[i]);
		i++;
	}
}
