//problem 17 number letter count
#include <iostream>
#include <stdio.h>
using namespace std;
void main()
{
	int sum= 0;
	int n = 1000;
	//first attempt till 100
	string dic[] = { "and", "one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred","thousand" };
	for (int i = 1; i < n+1; i++)
	{
		//0 to 20
		if (i <= 20)
		{
		sum += dic[i].length();
		}
		//21 to 99
		else if (i<100)
		{
			sum += dic[20 + (i/ 10)-2].length();//tens digit
			if (i % 10 != 0)
			{
				sum += dic[i % 10].length();//units digit
			}
		}
		else if (i == 100)
		{
			sum += (dic[1].length() + dic[28].length());//one hundred
		}
		else if (i < 1000)
		{
			int hundreds = i / 100;
			sum += dic[hundreds].length();
			sum += dic[28].length();//hundred
			sum += dic[0].length();//and
			int temp = i % 100;
				if (temp == 0)
				{
					sum -= dic[0].length();
				}
				else if (temp <= 20)
				{
					sum += dic[temp].length();
				}
				else if (temp<100)
				{
					sum += dic[20 + (temp / 10) - 2].length();
					if (i % 10 != 0)
					{
						sum += dic[temp % 10].length();
					}
				}
				
		}
		else if (i == 1000)
		{
			sum += (dic[1].length() + dic[29].length());//one thousand
		}
	}
	cout << sum;
	getchar();
}