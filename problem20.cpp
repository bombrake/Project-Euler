//factorial digit sum
//find the sum of the digits of 100!
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void main()
{
	string digits;
	int n;
	unsigned long int fact = 1;
	cout << "Enter the number whose factorial sum is to be computed" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		digits = to_string(fact);
	} 
	
}