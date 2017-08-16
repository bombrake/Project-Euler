#include <iostream>
#include<stdio.h>
using namespace std;
/*int main()
{
	int i,fib[2] = { 1, 2},sum=2,newturn=0;
	for (i = 2; i<100000; i++)
	{
		if (newturn>4000000)
		{
			break;
		}
		newturn = fib[1] + fib[0];
		if (newturn % 2 == 0)
		{
			sum += newturn;
		}
		fib[0] = fib[1];
		fib[1] = newturn;
	}
	cout << sum;
	return 0;
}
*/
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