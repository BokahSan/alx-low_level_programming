#include "main.h"


/**
 *print_alphabet_x10 - display alphabets 10 times
 *
 * Return : void
 */
void print_alphabet_x10(void)
{
	int count;
	int i;

	for (count = 0; count < 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
