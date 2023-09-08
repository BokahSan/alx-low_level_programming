#include <stdio.h>


/**
 * main - Prints the alphabet except q and e
 * Return: 0 and exit the program
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');
	return (0);
}
