#include <iostream>
#include <string>
#include <tuple>
int main()
{
	std::cout << "enter an integer " << std::endl;
	//int playerNumber{};
	//std::cin >> playerNumber; 
 
	/*int sum{ 0 };
	sum = sum + playerNumber;
	
	std::cout << "enter another number" << std::endl;
	std::cin >> playerNumber;
	sum += playerNumber;

	std::cout << "enter another number" << std::endl;
	std::cin >> playerNumber;
	sum += playerNumber;

	std::cout << "enter another number" << std::endl;
	std::cin >> playerNumber;
	sum += playerNumber;

	std::cout << "enter another number" << std::endl;
	std::cin >> playerNumber;
	sum += playerNumber;
	std::cout << "your total is: " << sum << std::endl;*/

	std::tuple<int, int, int, int, int> playerAnswers;
	std::cout << "please enter 5 integers" << std::endl;

	auto [int1, int2, int3, int4, int5] = playerAnswers;
	std::cin >> int1 >> int2 >> int3 >> int4 >> int5;

	int sum{ int1 + int2 + int3 + int4 + int5 };

	std::cout << "your total is: " << sum << std::endl;

	if (sum > 100)
	{
		std::cout << "you win! " << std::endl;
	}
	else 
	{
		std::cout << "you lose :( " << std::endl;
	}
	return 0;
}