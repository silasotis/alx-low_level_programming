#include "main.h"
/**
  * get_endianness - checks endianness
  * return; 0 if big endian or 1 if little endian
  */
int get_endianness(void)
{
	unsigned int j = 1;
	char *d = (char *) &j;

	return (*d);
}
