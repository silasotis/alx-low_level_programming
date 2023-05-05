#include "main.h"
/**
  * get_bit - print the value of a bit at a given index
  * @index: index of the bit
  * @n: number to search
  * return: value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	bit_value = (n >> index) & 1;
	return (bit_value);
}

