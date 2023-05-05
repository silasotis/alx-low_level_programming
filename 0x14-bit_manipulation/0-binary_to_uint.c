#include "main.h"
/**
  * binary_to_unit - convers binary string to unsigned int
  * @b: string that contains binary number
  * return: number to be converted
  */
unsigned int binary_to_uint(const char *b)
{
	int x;
	int numb;

	if (!b)
	return (0);
	for (x = 0; b[x]; b++)
	{
	if (b[x] != '0' && b[x] != '1')
	return (0);
	numb = 2 * numb + (b[x] - '0');
	}
	return (numb);
}

