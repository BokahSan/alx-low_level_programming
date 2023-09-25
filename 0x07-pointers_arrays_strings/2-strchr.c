#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: type char pointer
 * @c: type char memory area
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
