#include <stdio.h
/**
  *main - entry point
  *
  *Description: print numbers to base 10
  *Return: always 10 (success)
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
