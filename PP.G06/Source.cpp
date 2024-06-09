#include <iostream>
#include <string>
#include <vector>
int main()
{
	int num{};
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
				for (int j{ i + 1}; j <= num; j++)
				{
					std::cout << j; 
				}
				std::cout << std::endl << i;
				std::cout << i * i;
				
			
			}
			 
			

		}
	}

}

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