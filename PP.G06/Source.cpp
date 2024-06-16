#include <iostream>
int main()
{
	std::cout << "User 1, choose a number between 1 and 10. " << std::endl;
	int solution{};
	std::cin >> solution;
	system("CLS");

	std::cout << "User 2, guess the number between 1 and 10. " << "\n"
		<< "You have 3 numGuesses :) " << std::endl;
	int numGuesses{ 1 };
	int guess{};
	bool isWinner{false}; 
	do
	{	
		std::cin >> guess;
		if (guess > 0 && guess <= 10)
		{
			if (guess == solution)
			{
				std::cout << "you got it! " << std::endl;
				isWinner = true; 
				break;
			}
			else if ((guess != solution) && (numGuesses < 3))
			{
				std::cout << "numGuesses left: " << (3 - numGuesses) << std::endl;
				std::cout << "choose anoter number " << std::endl;
			}
			numGuesses++;
		} 
		else
		{
			std::cout << "pick a number between 1 and 10 . : )" << std::endl;
		}
	} while (numGuesses <= 3); 

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