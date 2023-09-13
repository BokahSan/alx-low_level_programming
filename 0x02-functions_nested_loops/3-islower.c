#include "main.h"


/**
 *_islower - checks if a letter is lowercase
 *@c: The character to be checked
 *
 * Return: 0 if lower else 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
