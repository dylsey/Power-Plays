#include <iostream>
int main()
{
	std::cout << "User 1, choose a number between 1 and 10. " << std::endl;
	int gameNumber{};
	std::cin >> gameNumber;
	system("CLS");

	std::cout << "User 2, guess the number between 1 and 10. " << "\n"
		<< "You have 3 tries :) " << std::endl;
	int tries{ 1 };
	int userGuess{};
	bool isWinner{false}; 
	do
	{	
		std::cin >> userGuess;
		if (userGuess > 0 && userGuess <= 10)
		{
			if (userGuess == gameNumber)
			{
				std::cout << "you got it! " << std::endl;
				isWinner = true; 
				break;
			}
			else if ((userGuess != gameNumber) && (tries < 3))
			{
				std::cout << "tries left: " << (3 - tries) << std::endl;
				std::cout << "choose anoter number " << std::endl;
			}
			tries++;
		} 
		else
		{
			std::cout << "pick a number between 1 and 10 . : )" << std::endl;
		}
	} while (tries <= 3); 

	if (isWinner)
	{
		std::cout << " You Win!!!! " << std::endl;
	} 
	else
	{
		std::cout << "nice try, but you loose. : ( ... " << std::endl;
	}
}

/*int num{};
	while (num <= 0)
	{
		std::cout << "enter a positive number." << std::endl;
		std::cin >> num;

		if (num >= 1)
		{
			std::cout << "x";
			for (int i{ 1 }; i <= num; i++)
			{
				std::cout << i;
			}
			std::cout << std::endl;

			for (int j{ 1 }; j <= num; j++)
			{
				std::cout << j;
				for (int k{ 1 }; k <= num; k++)
				{
					std::cout << k * j;
				}
				std::cout << std::endl;
			}

		}
	}*/
	//int num{};
	//while (num <= 0)
	//{
	//	std::cout << "enter a positive number." << std::endl;
	//	std::cin >> num;

	//	if (num >= 1)
	//	{
	//		for (int i{ 1 }; i <= num; i++)
	//		{
	//			std::cout << i << std::endl;
	//		}
	//	}
	//}