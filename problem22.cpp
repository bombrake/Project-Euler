/*Problem 22- Names Sum*/
#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>
#include <String>
#include <algorithm>
#include <map>
using namespace std;
int word_sum(string a, map<string,int> lettermap)
{
	int sum=0;
	map<string, int>::iterator iter;
	for (std::string::iterator it = a.begin(); it != a.end(); ++it)
	{
		string temp(1,*it);
		iter= lettermap.find(temp);
		sum += iter->second;
	}
	return sum;
}
int main()
{
	//step 1 read the text file
	cout << "Problem 22" << endl;
	ifstream f;
	f.open("D:\\Google Drive\\Project-Euler\\p022_names.txt");
	string a;
	vector<string> all_names;
	int i=0;
	while (!f.eof())
	{
		getline(f,a, ',');
		a = a.substr(1, a.size() - 2); //removing the '/' from begining and end
		all_names.push_back(a);
		//cout << a << endl;
		//i++;
	}
	cout << "Done"<<endl;
	//Now that we have all names, sort.
	sort(all_names.begin(), all_names.end());
	//check sort
	/*
	for (auto i = all_names.begin(); i != all_names.end(); i++)
	{
		cout << *i << endl;
	}
	*/
	//step 2 obtain names sums
	//create a dictionary or map here.
	map<string, int> lettermap = {
		{"A",1},
		{ "B",2 },
		{ "C",3 },
		{ "D",4 },
		{ "E",5 },
		{ "F",6 },
		{ "G",7 },
		{ "H",8 },
		{ "I",9 },
		{ "J",10 },
		{ "K",11 },
		{ "L",12 },
		{ "M",13 },
		{ "N",14 },
		{ "O",15 },
		{ "P",16 },
		{ "Q",17 },
		{ "R",18 },
		{ "S",19 },
		{ "T",20 },
		{ "U",21 },
		{ "V",22 },
		{ "W",23 },
		{ "X",24 },
		{ "Y",25 },
		{ "Z",26 }
	};
	//Now, for each word calculate the sum.
	unsigned long long int total = 0;
	int sum;
	for (auto i = all_names.begin(); i != all_names.end(); i++)
	{
		sum = word_sum(*i, lettermap);
		int index = (i - all_names.begin())+1;
		sum=sum *(index);
		total +=sum;
		//checking for COLIN
		/*
		if (index == 938)
		{
			cout << sum << endl;
		}
		*/
	}
	cout << "------------------------" << endl;
	cout << total<<endl;
	getchar();
	//step 3 report maz
	return 0;
}