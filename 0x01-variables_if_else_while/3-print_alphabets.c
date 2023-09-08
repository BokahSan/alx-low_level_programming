#include <stdio.h>


/**
 * main - display the alphabet in lowercase, and then in uppercase
 * Return: 0 and exit the program
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
