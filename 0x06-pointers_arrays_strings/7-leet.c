#include "main.h"

/**
 * leet - Encode a string into 1337
 *
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int i, j, k;
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				k = j;
				s[i] = num[k];
			}
		}
	}

	return (s);

}
