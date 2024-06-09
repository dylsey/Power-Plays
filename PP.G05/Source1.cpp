#include <iostream>
#include <string>
#include <vector>
#include <array>

struct Address
{
	int streetNumber;
	std::string street;
	std::string city;
	std::string state;
	int zipCode;
};

int main()
{
	Address address1{};
	Address address2{};
	Address address3{};

	std::array<std::string, 3> block{};
	std::cout << "Enter the 3 addresses: " << std::endl;

	std::cin >> address1.streetNumber >> address1.street >> address1.city >> address1.state >> address1.zipCode;
	std::cin >> address2.streetNumber >> address2.street >> address2.city >> address2.state >> address2.zipCode;
	std::cin >> address3.streetNumber >> address3.street >> address3.city >> address3.state >> address3.zipCode;

	std::cout << "The address1 is: " << address1.streetNumber << " " << address1.street << " " << address1.city << " " << address1.state << " " << address1.zipCode << std::endl;
	std::cout << "The address2 is: " << address2.streetNumber << " " << address2.street << " " << address2.city << " " << address2.state << " " << address2.zipCode << std::endl;
	std::cout << "The address3 is: " << address3.streetNumber << " " << address3.street << " " << address3.city << " " << address3.state << " " << address3.zipCode << std::endl;

	return 0;
}