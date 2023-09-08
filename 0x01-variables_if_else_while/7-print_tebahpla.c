#include <stdio.h>


/**
 * main - display alphabet reverse and lowercase
 * Return: 0 and exit the program
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
			putchar(c);
		putchar('\n');

	return (0);
}
