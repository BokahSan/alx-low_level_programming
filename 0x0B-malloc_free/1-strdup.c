#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns *p to new alloc spc in mem, contains cp of str as par.
 * @str: type char memory value.
 * Return: Null if fails or if srt is NULL.
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	p = malloc(i * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';

	return (p);
}
