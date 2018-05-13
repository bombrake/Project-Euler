//Problem 23-Non Abundant Sums
/*
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long int sum_of_divisors(int i)
{
	int sum_div = 0;
	//return sum of divisors
	for (int j = 1; j <= (i / 2); j++)
	{
		if (i%j == 0)
		{
			sum_div += j;
		}
	}
	return sum_div;
}
bool abundant_check(long int i)
{
	if (sum_of_divisors(i) > i)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void main()
{
	long long int i, sum;
	vector<int> abundant_numbers;
	sum = 0;
	for (i = 0; i <= 28123; i++)
	{
		//for each number check if it is an abundant number. 
		if (abundant_check(i))
		{
			abundant_numbers.push_back(i);
			//cout << i << endl;
		}
	}
	//we have all the abundant numbers below the limit given.
	//our search space is limited from 0 to 28123
	//we exclude the numbers that can be written as sum of 2 abundant numbers from total sum.
	cout << "Total number of abundant numbers: " << abundant_numbers.size() << endl;
	long int tot_sum = (28123 * 28124) / 2;
	cout << "Total sum till 28123 is " << tot_sum << endl;
	bool a[28123] = {false};
	//now generate all possible sums of pair of these numbers and subtract from total sum.
	for (int i = 0; i < abundant_numbers.size(); i++)
	{
		for (int j = i; j < abundant_numbers.size(); j++)
		{
			 long long int newsum=abundant_numbers[i] + abundant_numbers[j];
			 if (newsum > 28123)
			 {
				 break;
			 }
			 else
			 {
				 a[newsum] = true;
			 }
			//cout << abundant_numbers[i] + abundant_numbers[j] << endl;
		}
	}
	for (int i = 1; i < 28123; i++)
	{
		if (a[i] == false)
		{
			sum += i;
		}
	}
	cout << sum;
	getchar();
}