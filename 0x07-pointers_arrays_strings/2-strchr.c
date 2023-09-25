#include "main.h"


/**
 * _strchr - Locates a character in a string
 * @s: type char pointer
 * @c: type char memory area
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (ptr = str; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
}
