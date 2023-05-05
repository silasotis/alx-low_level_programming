#include "main.h"
/**
  * flip_bits - counts number of bits needed to flip
  *get form one number to other
  * @n: the number to start from
  * @m: the number of bits needed to reach other number
  * return: the number of bits needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j;
	int count = 0;
	unsigned long int xor_result = n ^ m;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
	current = xor_result >> j;
	if (current & 1)
	count++;
	}
	return (count);
}
