#include <stdio.h
/**
  *main - entry point
  *
  *description: print numbers to base 10
  *return: always 10
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
