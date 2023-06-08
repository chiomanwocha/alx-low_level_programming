#ifndef MAIN_H
#define MAIN_H

/**
 * _power - Calculates the power of a number.
 * @base: The base number.
 * @pow: The exponent.
 *
 * Return: The result of base raised to the power of pow.
 */
unsigned long int _power(unsigned int base, unsigned int pow);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted unsigned int, or 0 if b is NULL or contains
 *         characters other than 0 or 1.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n);

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the number.
 * @index: The index of the bit to set.
 *
 * Return: 1 on success, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the number.
 * @index: The index of the bit to clear.
 *
 * Return: 1 on success, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Counts the number of bits needed to flip to convert
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, the character written.
 *         On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif /* MAIN_H */

