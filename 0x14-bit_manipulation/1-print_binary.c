#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

