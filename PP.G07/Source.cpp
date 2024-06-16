#include <iostream>

bool guessAgain(int &guess, int &solution, int &numGuesses);

int main()
{
	std::cout << "User 1, choose a number between 1 and 10. " << std::endl;
	int solution{};
	std::cin >> solution;

	while (solution < 1 || solution > 10)
	{
		std::cout << "please pick a number between 1 and 10." << std::endl;
		std::cin >> solution;
	}
	system("CLS");

	int numGuesses{};
	int guess{};

	while (guessAgain( guess, solution, numGuesses))
	{
		std::cout << "You have " << 3 - numGuesses << " attempts remaining :) " << std::endl;
	}
}

bool guessAgain(int &guess, int &solution, int & numGuesses)
{
	if (numGuesses >= 3)
	{
		std::cout << "sorry you lose. " << std::endl;
		return false;
	}
	else if (numGuesses < 3)
	{
		std::cout << "User 2, guess the number between 1 and 10. " << std::endl;
		std::cin >> guess;
		while (guess <= 0 || guess > 10)
		{
			std::cout << "pick a number in bounds. " << std::endl;
			std::cin >> guess;
		}
		if (guess == solution)
		{
			std::cout << " Winner! Winner! " << std::endl;
			return false;
		}
		else if ((guess != solution) && (numGuesses < 3))
		{
			numGuesses++;
			return true;
		}
	}
}



