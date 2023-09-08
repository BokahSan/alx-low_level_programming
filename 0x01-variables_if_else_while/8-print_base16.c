#include <stdio.h>


/**
 * main - print number of base16 in lowercase
 * Return: 0 and exit the program
 */

int main(void)
{
	int i = 0;
	char tab[16] = "0123456789abcdef";

	while (i < 16)
	{
		putchar(tab[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
