#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: print alphabet in reverse order
  *Return: always 0
  */
int main(void)
{
	int n;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
