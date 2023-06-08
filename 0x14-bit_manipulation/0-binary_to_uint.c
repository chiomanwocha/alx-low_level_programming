#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted unsigned int, or 0 if b is NULL or contains
 *         characters other than 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}

