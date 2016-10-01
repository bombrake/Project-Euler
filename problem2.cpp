#include <iostream>
#include<stdio.h>
using namespace std;
void main()
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
}
