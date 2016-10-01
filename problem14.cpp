//problem number 14
//longest collatz sequence
#include<iostream>
#include<time.h>
using namespace std;
unsigned long int collatz(unsigned long int start)
{
	unsigned long int term = start, count = 1;
	while (term != 1)
	{
		if (term % 2 == 0)
		{
			term = term / 2; count++;
		}
		else
		{
			term = (3 * term) + 1; count++;
		}
	}
	return count;
}

int main()
{
	clock_t tStart = clock();
	//int start;
	unsigned long int max = 0, maxterm;
	//cin>>start;
	for (unsigned long int i = 1; i<=1000000; i++)
	{
		if (collatz(i)>max)
		{
			max = collatz(i);
			maxterm = i;
			//cout<<max<<endl;
		}
	}
	cout << maxterm << endl;
	printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	return 0;
}
