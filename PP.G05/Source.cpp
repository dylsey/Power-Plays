#include <iostream>
#include <string>
#include <array>
#include <vector>
struct Address
{
	int streetNumber{};
	std::string street{};
	std::string city{};
	std::string state{};
	int zipcode{};
};
int main()
{

	//using arrays 
	std::array<Address, 3> addresses{};
	//addresses one
	std::cout << "We are going to store some addresseses! " << std::endl;
	std::cout << "Please enter an street number " << std::endl;
	std::cin >> addresses.at(0).streetNumber;
	std::cout << "enter a street name" << std::endl;
	std::cin >> addresses.at(0).street;
	std::cout << "enter a city" << std::endl;
	std::cin >> addresses.at(0).city;
	std::cout << "enter a state" << std::endl;
	std::cin >> addresses.at(0).state;
	std::cout << "enter a zip code" << std::endl;
	std::cin >> addresses.at(0).zipcode;

	//store addresses 2
	std::cout << "Now enter a 2nd addresses " << std::endl;
	std::cout << "Please enter an street number " << std::endl;
	std::cin >> addresses.at(1).streetNumber;
	std::cout << "enter a street name" << std::endl;
	std::cin >> addresses.at(1).street;
	std::cout << "enter a city" << std::endl;
	std::cin >> addresses.at(1).city;
	std::cout << "enter a state" << std::endl;
	std::cin >> addresses.at(1).state;
	std::cout << "enter a zip code" << std::endl;
	std::cin >> addresses.at(1).zipcode;

	//store addresses 3 
	std::cout << "Finally a 3rd addresses! " << std::endl;
	std::cout << "Please enter an street number " << std::endl;
	std::cin >> addresses.at(2).streetNumber;
	std::cout << "enter a street name" << std::endl;
	std::cin >> addresses.at(2).street;
	std::cout << "enter a city" << std::endl;
	std::cin >> addresses.at(2).city;
	std::cout << "enter a state" << std::endl;
	std::cin >> addresses.at(2).state;
	std::cout << "enter a zip code" << std::endl;
	std::cin >> addresses.at(2).zipcode;

	std::cout << "Now pick an addresses to print : " << "\n"
		<< "1 " << "\n"
		<< "2 " << "\n"
		<< "3 " << std::endl;

	int choice{};
	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "The addresses is: " << "\n"
			<< addresses.at(0).streetNumber << " " << addresses.at(0).street << "\n"
			<< addresses.at(0).city << "\n"
			<< addresses.at(0).state << "\n"
			<< addresses.at(0).zipcode << std::endl;
	}
	else if (choice == 2)
	{
		std::cout << "The addresses is: " << "\n"
			<< addresses.at(1).streetNumber << " " << addresses.at(1).street << "\n"
			<< addresses.at(1).city << "\n"
			<< addresses.at(1).state << "\n"
			<< addresses.at(1).zipcode << std::endl;
	}
	else if (choice == 3)
	{
		std::cout << "The addresses is: " << "\n"
			<< addresses.at(2).streetNumber << " " << addresses.at(2).street << "\n"
			<< addresses.at(2).city << "\n"
			<< addresses.at(2).state << "\n"
			<< addresses.at(2).zipcode << std::endl;
	}
	else
	{
		std::cout << " Not a stored addresses choice" << std::endl;
	}

	////using vector instead of array 
	//std::vector<Address> myAddresses{};
	//std::cout << "We are going to store some Addresses! " << std::endl;
	////1st Address
	//myAddresses.push_back(Address());
	//std::cout << "Please enter an street number " << std::endl;
	//std::cin >> myAddresses.at(0).streetNumber;
	//std::cout << "enter a street name" << std::endl;
	//std::cin >> myAddresses.at(0).street;
	//std::cout << "enter a city" << std::endl;
	//std::cin >> myAddresses.at(0).city;
	//std::cout << "enter a state" << std::endl;
	//std::cin >> myAddresses.at(0).state;
	//std::cout << "enter a zip code" << std::endl;
	//std::cin >> myAddresses.at(0).zipcode;
	///*std::cout << "\n" << "The 1st Addresses is: " << "\n"
	//	<< myAddresses.at(0).streetNumber << " " << myAddresses.at(0).street << "\n"
	//	<< myAddresses.at(0).city << "\n"
	//	<< myAddresses.at(0).state << "\n"
	//	<< myAddresses.at(0).zipcode << std::endl;*/

	//	//2nd Address
	//std::cout << "\n" << "Now enter a 2nd address " << std::endl;
	//myAddresses.push_back(Address());
	//std::cout << "Please enter an street number " << std::endl;
	//std::cin >> myAddresses.at(1).streetNumber;
	//std::cout << "enter a street name" << std::endl;
	//std::cin >> myAddresses.at(1).street;
	//std::cout << "enter a city" << std::endl;
	//std::cin >> myAddresses.at(1).city;
	//std::cout << "enter a state" << std::endl;
	//std::cin >> myAddresses.at(1).state;
	//std::cout << "enter a zip code" << std::endl;
	//std::cin >> myAddresses.at(1).zipcode;
	///*std::cout << "\n" << "The 2nd Addresses is: " << "\n"
	//			<< myAddresses.at(1).streetNumber << " " << myAddresses.at(0).street << "\n"
	//			<< myAddresses.at(1).city << "\n"
	//			<< myAddresses.at(1).state << "\n"
	//			<< myAddresses.at(1).zipcode << std::endl;*/

	//			//3rd Address
	//std::cout << "\n" << "Now enter a 3nd address " << std::endl;
	//myAddresses.push_back(Address());
	//std::cout << "Please enter an street number " << std::endl;
	//std::cin >> myAddresses.at(2).streetNumber;
	//std::cout << "enter a street name" << std::endl;
	//std::cin >> myAddresses.at(2).street;
	//std::cout << "enter a city" << std::endl;
	//std::cin >> myAddresses.at(2).city;
	//std::cout << "enter a state" << std::endl;
	//std::cin >> myAddresses.at(2).state;
	//std::cout << "enter a zip code" << std::endl;
	//std::cin >> myAddresses.at(2).zipcode;
	///*std::cout << "\n" << "The 3nd Addresses is: " << "\n"
	//	<< myAddresses.at(2).streetNumber << " " << myAddresses.at(0).street << "\n"
	//	<< myAddresses.at(2).city << "\n"
	//	<< myAddresses.at(2).state << "\n"
	//	<< myAddresses.at(2).zipcode << std::endl;*/

	//std::cout << "\n" << "Now pick an addresses to print : " << "\n"
	//	<< "1 " << "\n"
	//	<< "2 " << "\n"
	//	<< "3 " << std::endl;

	//int choice{};
	//std::cin >> choice;

	//if (choice == 1)
	//{
	//	std::cout << "The addresses is: " << "\n"
	//		<< myAddresses.at(0).streetNumber << " " << myAddresses.at(0).street << "\n"
	//		<< myAddresses.at(0).city << "\n"
	//		<< myAddresses.at(0).state << "\n"
	//		<< myAddresses.at(0).zipcode << std::endl;
	//}
	//else if (choice == 2)
	//{
	//	std::cout << "The addresses is: " << "\n"
	//		<< myAddresses.at(1).streetNumber << " " << myAddresses.at(1).street << "\n"
	//		<< myAddresses.at(1).city << "\n"
	//		<< myAddresses.at(1).state << "\n"
	//		<< myAddresses.at(1).zipcode << std::endl;
	//}
	//else if (choice == 3)
	//{
	//	std::cout << "The addresses is: " << "\n"
	//		<< myAddresses.at(2).streetNumber << " " << myAddresses.at(2).street << "\n"
	//		<< myAddresses.at(2).city << "\n"
	//		<< myAddresses.at(2).state << "\n"
	//		<< myAddresses.at(2).zipcode << std::endl;
	//}
	//else
	//{
	//	std::cout << " Not a stored addresses choice" << std::endl;
	//}

}

// Card array 
//struct Card
//	{
//		enum class FaceValue {
//			two,
//			three,
//			four,
//			five,
//			six,
//			seven,
//			eight,
//			nine,
//			ten,
//			jack,
//			queen,
//			king,
//			ace
//		};
//		enum class Suit {
//			hearts,
//			diamonds,
//			spades,
//			clubs
//		};
//		FaceValue faceValue{};
//		Suit suit{};
//	};
//	std::array<Card, 5> cards
//{
//	using uniform initialization
//
//	Card{ Card::FaceValue::ace, Card::Suit::clubs },
//		Card{ Card::FaceValue::king, Card::Suit::clubs },
//		Card{ Card::FaceValue::queen, Card::Suit::clubs },
//		Card{ Card::FaceValue::jack, Card::Suit::clubs },
//		Card{ Card::FaceValue::ten, Card::Suit::clubs }
// how to print these as an std::array? 
	/* using scope resolution operators (AKA .operators)
	 accesses a specific instance of something
	 this accesses the memory

	cards.at(0).suit = Card::Suit::clubs;
	cards.at(0).faceValue = Card::FaceValue::ace;

	cards.at(1).suit = Card::Suit::clubs;
	cards.at(1).faceValue = Card::FaceValue::king;

	cards.at(2).suit = Card::Suit::clubs;
	cards.at(2).faceValue = Card::FaceValue::queen;

	cards.at(3).suit = Card::Suit::clubs;
	cards.at(3).faceValue = Card::FaceValue::jack;

	cards.at(4).suit = Card::Suit::clubs;
	cards.at(4).faceValue = Card::FaceValue::ten;*/
