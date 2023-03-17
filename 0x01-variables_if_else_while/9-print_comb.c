#include <stdio.h>
/**
  *main - Entry poin
  *
  *Descripition: print all combination of single digit number
  *Return: always 0
  */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
	if (b == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	return (0);
}

