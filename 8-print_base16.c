#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: print base 16 lowercase
  *Return: always 0
  */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
