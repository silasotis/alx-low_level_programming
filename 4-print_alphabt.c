#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints alphabet except e and q'
  *Return: always o
  */
int main(void)
{
	int lc = 97;

	while (lc <= 122)
	{
		if (lc == 101 || lc == 113)
		{
			lc++;
			continue;
		}
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
