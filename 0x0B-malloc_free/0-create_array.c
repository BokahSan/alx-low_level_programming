#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create array of char.
 * @c: type char array init value.
 * @size: type unsigned int of the memory to print.
 * Return: Null if fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[z] = c;
	return (p);
}
