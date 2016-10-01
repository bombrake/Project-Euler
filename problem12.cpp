//problem 12
//note that this solution is not optimal. better method should be found and utilised.
#include<iostream>
#include<conio.h>
using namespace std;
long int triangular(long int n)
{
	return (n*(n + 1)) / 2;
}

long int factors_number(long int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		int count = 0;
		for (long int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				//cout << i << endl;
				count++;
			}
		}
		//cout << n<<endl;
		//cout << "number of factors is" << count+1;

		return count + 1;
	}
}

void main()
{
	//generate triangular numbers
	//cout << "Enter N for Nth triangular number" << endl;
	//int n;
	//cin >> n;
	//cout << triangular(n) << endl;
	int limit = 125;
	for (long int i = 1; i < 1000000; i++)
	{
		long int trinum = triangular(i);
		if (factors_number(trinum)>limit)
		{
			cout << limit << ' ' << trinum << endl;
			limit *= 2;
			if (limit >= 501)
			{
				break;
			}
		}
	}

	getchar();

}