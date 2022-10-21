#include <stdio.h>
/**
 * main - entry
 * Return: 0 always true
*/
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz\t");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz\t");
		}
		else
		{
			printf("%d\t", x);
		}
	}
	printf("\n");
	return (0);
}
