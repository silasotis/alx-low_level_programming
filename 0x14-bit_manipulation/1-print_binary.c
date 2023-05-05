#include "main.h"
/**
  * print_binary - print binary representation of a number
  * @n: number to print in binary
  */
void print_binary(unsigned long int n)
{
	int j;
	int track = 0;
	unsigned long int local;

	for (j = 63; j >= 0; j--)
	{
	local = n >> 1;
	if (local & 1)
	{
	_putchar('1');
	track++;
	}
	else if (track)
	_putchar('0');
	}
	if (!track)
	_putchar('0');
}
