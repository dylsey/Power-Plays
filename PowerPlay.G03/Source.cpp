#include <iostream>	
#include <string>
#include <iomanip>
int main()
{
	//Play 4 Graded 
	std::cout << "please enter an integer for a numerator. " << std::endl;

	int numerator{};
	std::cin >> numerator;

	std::cout << "please enter an integer for a denominator. " << std::endl;

	int denominator{};
	std::cin >> denominator;

	float answer{ (float)numerator / denominator };

	std::cout << std::fixed << std::setprecision(4) << answer << std::endl;
}

//Play 1 binary calc solution
/*std::cout << "enter an 8 digit binary number. " << std::endl;

int binary{};
std::cin >> binary;

double decimal{(binary % 10) * pow(2,0) };
binary /= 10;

decimal += (binary % 10)* pow(2, 1);
binary /= 10;

decimal += (binary % 10) * pow(2, 2);
binary /= 10;

decimal += (binary % 10) * pow(2, 3);
binary /= 10;

decimal += (binary % 10) * pow(2, 4);
binary /= 10;

decimal += (binary % 10) * pow(2, 5);
binary /= 10;

decimal += (binary % 10) * pow(2, 6);
binary /= 10;

decimal += (binary % 10) * pow(2, 7);
binary /= 10;

decimal += (binary % 10) * pow(2, 8);
binary /= 10;


std::cout << decimal;*/e
//Play 2raidus solution
/*const float Pi{3.1415f};

std::cout << "input a circle radius" << std::endl;

float radius{};
std::cin >> radius;
float area{ Pi * (radius * radius) };
std::cout << std::fixed << std::setprecision(4) << area;
*/
//Play 3 input number manipulation
/*std::cout << "input a number" << std::endl;

int number{};
std::cin >> number;

number = (number + 5);
std::cout << number << std::endl;

number = (number * 89);
std::cout << number << std::endl;

number = (number / 10);
std::cout << number << std::endl;

number = (number % 10);
std::cout << number << std::endl;

number = (789 - number);
std::cout << number << std::endl;
*/
