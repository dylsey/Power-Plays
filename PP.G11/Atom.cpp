#include <iostream>
#include <string>
#include "Atom.h"

//default constructor
Atom::Atom()
	:m_atomicNumber{ 0 },
	m_atomicName{ " " },
	m_abbreviation{ " " },
	m_atomicWeight{ 0.0f }
{
	/*std::cout << "Enter atomic number: " << std::endl;
	std::cin >> m_atomicNumber;
	std::cout << "Enter atomic name: " << std::endl;
	std::cin >> m_atomicName;
	std::cout << "Enter abbreviation: " << std::endl;
	std::cin >> m_abbreviation;
	std::cout << "Enter atomic weight: " << std::endl;
	std::cin >> m_atomicWeight;*/
};
//conversion constructor
Atom::Atom(int atomicNumber, const std::string& atomicName, const std::string& abbreviation, float atomicWeight)
	:m_atomicNumber{ atomicNumber },
	m_atomicName{ atomicName },
	m_abbreviation{ abbreviation },
	m_atomicWeight{ atomicWeight }
{

};
//Getters and Setters
//atomic number
int Atom::getAtomicNumber() const 
{
	return m_atomicNumber; 
}

void Atom::setAtomicNumber(int number)
{
	m_atomicNumber = number; 
}

//atomic name
const std::string& Atom::getAtomicName() const
{
	return m_atomicName;
}

void Atom::setName(const std::string& name)
{
	m_atomicName = name;
}

//abbreviation
const std::string& Atom::getAbbreviation() const
{
	return m_abbreviation;
}

void Atom::setAbbreviation(const std::string& abbreviation)
{
	m_abbreviation = abbreviation;
}

//atomic weight
float Atom::getAtomicWeight() const
{
	return m_atomicWeight;
}

void Atom::setAtomicWeight(float weight)
{
	m_atomicWeight = weight;
}



