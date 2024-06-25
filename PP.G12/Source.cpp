#include <iostream>
#include <random>
#include <string>


int main()
{
	std::random_device seed;
	std::default_random_engine e(seed());
	std::bernoulli_distribution bd(.5);

	float sallysAllowance{ 0.0f };
	float johnsAllowance{ 0.0f };
	const float* dad{ nullptr };
	float dadsWallet{ 5.00f };
	
	bool hasMoney{true};
	while (hasMoney)
	{
		if (dadsWallet == 0)
		{
			hasMoney = false;
		}

		for (int i{ 0 }; i < dadsWallet; i++)
		{
			std::cout << "dad's wallet: $" << dadsWallet << std::endl;
			std::cout << "Who will dad pay? " << std::endl;
			std::string choice{};
			std::string sally{ "sally" };
			std::string john{ "john" };

			std::cin >> choice;

			if (choice.compare(sally)==0)
			{
				std::cout << "you picked sally" << std::endl;
			}
			else if (choice.compare(john)==0)
			{
				std::cout << "you picked john" << std::endl;
			}

			if (bd(e))
			{
				dad = &sallysAllowance;
				if (dad = &sallysAllowance)
				{
					sallysAllowance++;
					dadsWallet--;
					std::cout << "dad picked sally" << std::endl;
					std::cout << "sally's allowance: $" << sallysAllowance << std::endl;
				}
			}
			else
			{
				dad = &johnsAllowance;
				if (dad = &johnsAllowance)
				{
					johnsAllowance++;
					dadsWallet--;
					std::cout << "dad picked john" << std::endl;
					std::cout << "john's allowance: $" << johnsAllowance << std::endl;
				}
			}
		}
	}
	std::cout << "dad's broke : < ( " << std::endl;
}