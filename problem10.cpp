
#include<iostream>
#include<stdio.h>
#include<math.h>
unsigned long long int prime;
unsigned long long int n, i;
int isprime(unsigned long long int n)
{
	int k = 0;
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else if (n >= 3)
	{
		for (i = 1; i <= sqrt(n); i++)
		{
			if ((n%i) == 0)
			{
				k++;
				//	std::cout << k;
			}
			if (k > 1)
			{
				return 0;
				break;
			}
		}
	}
	if (k == 1)
	{
		return 1;
	}
}
unsigned long long int prime_sum_generator()
{
	unsigned long long int j,sum=0;
	for (j = 2; j < 2000000; j++)
	{
		if ((isprime(j)) == 1)
		{
			sum+=j;
			
		}

	}
	return sum;
}
void main()
{
	std::cout << "The sum is" << prime_sum_generator() << std::endl;
	getchar();
}