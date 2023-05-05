#include "main.h"
/**
  * set_bit - set the value of a bit to 1 at a given index
  * @n: pointer to the number to be changed
  * @index: index to be set to 1
  * return: -1 for failure and 1 for success
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

