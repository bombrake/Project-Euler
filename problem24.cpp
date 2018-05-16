/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/
#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

vector<string> permutations;
void permute(string a, int start, int end)
{
	int i;
	if (start == end)
	{ //cout<<a[0]<<a[1]<<a[2]<<endl;
		permutations.push_back(a);
	}
	else
	{
		for (i = start; i <= end; i++)
		{
			swap(a[start], a[i]);
			permute(a, start + 1, end);
			swap(a[start], a[i]);
		}
	}
}

int main()
{
	// your code goes here
	string digits = "0123456789";
	//print the permutations of the elements in digits.
	cout << "Generating Permutations" << endl;
	permute(digits, 0, digits.size() - 1);
	cout << "Permutations Generated" << endl;
	//print in sorted order
	cout << "Sorting" << endl;
	sort(permutations.begin(), permutations.end());
	cout << "Sorted" << endl;
	//for(auto& it:permutations)
	//{
	cout << permutations[1000000 - 1] << endl;
	
	//cout<<it<<endl;
	//}
	//getchar();
	return 0;
}

//Time on Ideone: 1.04 seconds