#include <iostream>
#include<stdio.h>
using namespace std;
//Sum of multiples of 3 or 5 under 1000
int main()
{
	int sum=0;
	int i=0;
	while(i<1000)
	{
		if((i%3==0)||(i%5==0))
		{
			sum+=i;
		}
		i++;
	}
	cout<< sum;
	return 0;
}