#include <iostream>
#include <string>


int main() 
{	
	std::cout << "Hello, Please tell me your name? " << std::endl;

	//getting user input for name
	std::string userName;
	std::cin >> userName;
	std::cout << "Hi, " << userName << ", nice to meet you." << std::endl;
	std::cout << "Let's calculate the distance between 2 coordinates! " 
		<< std::endl;

	//getting user input for coordinate 1 values
	std::cout << userName << ", Please give me 2 coordinate values " << std::endl;
	double x1; 
	double y1;
	std::cin >> x1 >> y1;
		
	//getting user values for coordinate 2
	std::cout << "Would you kindly give me 2 more coordinate values? " 
		<< std::endl;
	double x2; 
	double y2;
	std::cin >> x2 >> y2;

	//doubleing values for user to see
	std::cout << "Your  coordinates are: " << std::endl;
	std::cout << "x1: " << x1 << ", y1: " << y1 << std::endl;
	std::cout << "x2: " << x2 << ", y2: " << y2 << std::endl;
	
	//answer 
	double answer{sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)))};
	std::cout << "the distance is: " << answer << std::endl;

	return 0;
}