#include<iostream>
#include<stdio.h>
#include<math.h>
double number, a, b;
void sum_of_square(double limit)
{
	a = (limit*(limit + 1)*(2 * limit + 1)) / 6;
	std::cout << a << std::endl;
}
void sum_square(double limit)
{
	b = pow((limit*(limit + 1) / 2), 2);
	std::cout << b << std::endl;
}
void main()
{
	std::cout << "Enter the number to be used as limit" << std::endl;
	std::cin >> number;
	sum_of_square(number);
	sum_square(number);
	std::cout << "Difference is equal to" << (b - a) << std::endl;
	getchar();
}