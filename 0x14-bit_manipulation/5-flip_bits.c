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
	unsigned int count, i;

	difference = n ^ m;  /* XOR the two numbers to get the differing bits */
	count = 0;  /* Initialize the count of differing bits to 0 */

	/* Iterate through each bit of the difference */
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		result = 1 << i;  /* Shift 1 to the current bit position */

		/* Check if the bit at the current position is set in the difference */
		if (result == (difference & result))
			count++;  /* Increment the count if the bit is set */
	}

	return (count);  /* Return the count of differing bits */
}

