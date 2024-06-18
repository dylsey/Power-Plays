#include <fstream>
#include <iostream>
#include <random>
#include <string>

int main()
{
	std::random_device seed;
	std::default_random_engine e(seed());
	std::uniform_int_distribution<int> uniformDist(1, 100);
	std::bernoulli_distribution bDist(0.9f);

	//makes sure the same number prints to console and gets written to the .txt file
	int sameNumber{ uniformDist(e) };

	const std::string fileName{ "numbers.txt" };

	if (bDist(e))
	{
		std::cout << sameNumber << std::endl;
		std::cout << "written to file." << std::endl;
		std::ofstream fout(fileName, std::ios::app);
		if (fout.is_open())
		{
			fout << sameNumber << std::endl;
			fout.close();
		}
		else
		{
			std::cout << "error opening file. " << std::endl;
		}	
	}
	else
	{
		std::ifstream fin{ fileName };
		if (!fin.is_open())
		{
			std::cout << "the file did not open correctly." << std::endl;
		}
		else if (fin.is_open())
		{
			std::cout << "print from file: " << std::endl;
			int numToPrint{};
			while (fin >> numToPrint)
			{
				std::cout << numToPrint << std::endl;
			}
		}
		fin.close();
	}
}

