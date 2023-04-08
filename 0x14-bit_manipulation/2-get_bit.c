#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to check the bits
 * @index: the index of the bit to be checked
 *
 * Return: the value of the bit at index, or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}

