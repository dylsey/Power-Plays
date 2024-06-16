#include <iostream>
#include <string>
#include <vector>
#include <array>

int main()
{
	int x{ 3 };
	int y{ 4 };
	float z;
	z = x / y;
	std::cout << z; 



/*	int a{ 3 };
	int b{ a };
	a = 4;
	a--; 


	int& c{ a };
	a = 5;

	const int& d{ a };
	a = 6;


	std::vector<int> vInt;
	vInt.push_back(2);
	std::cout << vInt.size();



	std::vector<int> v;
	for (int i{ 0 }; i < 9; i++) 
	{
		v.push_back(i);
	}

	for (int i{ 0 }; i < v.size(); i++)
	{
		std::cout << v.at(i) << std::endl;
	}

	for (auto& myInt : v)
	{
		myInt++;
		std::cout << myInt << std::endl;
	}*/ 
}