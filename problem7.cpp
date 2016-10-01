 
#include<iostream>
#include<stdio.h>
#include<math.h>
long int prime;
int n,i;
int isprime(int n)
{
	int k = 0;
	if ((n == 1) || (n==2))
	{
		return 1;
	}
	else if (n >= 3)
	{
		for (i = 1; i <= n / 2; i++)
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
	if (k==1)
	{
		return 1;
	}
}
long int prime_generator(int number)
{
	long int j;
	for (j = 2; j < 10000000; j++)
	{
		if ((isprime(j)) == 1)
		{
		number--;
		//std::cout << number << std::endl;
		}
		if (number==0)
		{
			return j;
		}
	}
}
void main()
{
	int number;
	std::cout << "Enter the value of n for nth prime"<<std::endl;
	std::cin >> number;
	std::cout << "The " << number << "th prime number is" << prime_generator(number)<< std::endl;
	getchar();
}