#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *description: check whether last digit if great or less than 5
  *Return: always o
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d is zero\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 not 0\n", n, ld);
	}
	return (0);
}
