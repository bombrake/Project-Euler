/*
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int i, j,c=0,digits[20],length=0;
int palindrome(int number)
{
	for (i = 0; i < 20; i++)
	{
		digits[i] = number % (10);//extract digits from number
		number /= 10;
		if (number == 0)
		{
			break;
		}
	}
	length = i + 1;
	for (i = 0; i < length; i++)
	{
		if (digits[i] == digits[length - i - 1])
		{
			c++;
		}
	}
	if (c == length)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int n1, n2, prod;
	n1 = 99; n2 = 99; prod = n1*n2;
	cout << prod;
	//int number;
	//cin >> number;//get number
	//cout << length<<endl;
	//palindrome(digits);//check if palindrome
	getchar();

}
*/