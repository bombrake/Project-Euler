#include<iostream>
#include<stdio.h>
#include<math.h>
//Largest prime factor of a number
using namespace std;
bool isPrime(int n)
{
	int i;bool p=true;
	for(i=2;i<=sqrtf(n);i++)
	{
		if(n%i==0)
		{
			//cout<<"Not Prime";
			p=false;
			return p;
		}
	}
	//cout<<"Prime";
	return p;
}
int main()
{
	//accept the number
	unsigned long int n = 600851475143;
	//cout<<"Enter the number"<<endl;
	//cin>>n;
	//calculate the factors
	unsigned long int j=1;
	while(j<sqrtf(n))
	{
		if(isPrime(j)&(n%j==0))
		{
			cout<<j<<" "; //print the factors
		}
		j++;
	}
	return 0;
}

//Runtime: 0.717 seconds.Can be improved ??









