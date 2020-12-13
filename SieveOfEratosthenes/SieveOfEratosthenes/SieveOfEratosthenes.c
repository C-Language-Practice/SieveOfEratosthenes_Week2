#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool primes[1000];
	for (int i = 2; i < 1000; i++)
	{
		primes[i] = true;
	}

	for (int i = 2; i < 1000; i++)
	{
		if (primes[i])
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					primes[i] = false;
					break;
				}
			}
			for (int k = i + 1; k < 1000; k++)
			{
				if (k % i == 0)
				{
					primes[k] = false;
				}
			}
		}
	}
	
	printf_s("Prime numbers between 0 and 999 are:\n\n");

	for (int i = 2; i < 1000; i++)
	{
		if (primes[i])
		{
			printf_s("%d\n", i);
		}
	}
	printf_s("\n");

	int usrInput;
	printf_s("To verify if a whole number is prime, please enter a prime candidate number:\n");
	scanf_s("%d", &usrInput);
	printf_s("\n");

	if (primes[usrInput])
	{
		printf_s("%d is a prime number\n", usrInput);
	}
	else 
	{
		printf_s("%d is not a prime number\n", usrInput);
	}

	return 0;
}