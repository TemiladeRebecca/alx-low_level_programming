#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit to set
 * @index: The index to set the value of bit
 *
 * Return: 1 if error, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit_mask = 1 << index;
	*n = *n | bit_mask;

	return (1);
}
