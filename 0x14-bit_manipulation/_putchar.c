#include "main.h"
#include <unistd.h>
/**
  * _putchar - writes the character c to stdout
  * @c: character to print out
  * return: 1 for success and -1 if it gives an errot
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
