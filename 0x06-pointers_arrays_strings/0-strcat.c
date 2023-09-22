#include "main.h"


/**
 *_strcat - concat two strings
 *
 *@src: the string to be concatenated
 *@dest: the string that got concatenated
 *
 * Return: a pointer to the result string
 */
char *_strcat(char *dest, char *src)
{
	int destSize;
	int i, j;

	for (destSize = 0; dest[destSize] != '\0'; destSize++)
	{

	}

	for (i = destSize, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
