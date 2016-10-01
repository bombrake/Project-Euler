//problem 15
#include<iostream>
#include<stdio.h>
using namespace std;
unsigned long long int prod(double n)
{
	double product=1;
	for (int i = 1; i < n+1; i++)
	{
		product =product*((n+i)/i);
	}
	return product;
}
void main()
{
	double n;
	cout << "Enter the value of n" << endl;
	cin >> n;
	cout << prod(n);
	getchar();
}
