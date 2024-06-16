#include <iostream>
#include <random>

int main()
{
	/*
	* 1. Seed
	* 2. Engine -> Role is to return unpredictable random bits.
	* 3. Distribution -> Role is to return random numbers that fall within a defined distribution 
	*	types of distribution::
	*	1. uniform_int 
	*	2. Bernoulli 
	*	3. 
	* 
	*/
	std::random_device seed;
	std::default_random_engine e(seed());
	std:: 
}