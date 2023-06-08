#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to convert
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int count;

	difference = n ^ m;
	count = 0;

	while (difference > 0)
	{
		if (difference & 1)
			count++;
		difference >>= 1;
	}

	return (count);
}

