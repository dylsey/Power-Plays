#pragma once
#include <iostream>
#include <string>	

class Atom
{
public:

	//default constructor
	Atom();
	//conversion constructor
	Atom(int atomicNumber, const std::string& atomicName, const std::string& abbreviation, float atomicWeight);

	//Getters and Setters

	//atomic number
	int getAtomicNumber() const;
	void setAtomicNumber(int atomicNumber);

	//atomic name
	const std::string& getAtomicName() const;
	void setName(const std::string& name);

	//abbreviation
	const std::string& getAbbreviation() const;
	void setAbbreviation(const std::string& abbv);

	//atomic weight
	float getAtomicWeight() const;
	void setAtomicWeight(float weight);

private:
	int m_atomicNumber{ 0 };
	std::string m_atomicName{ " " };
	std::string m_abbreviation{ " " };
	float m_atomicWeight{ 0.0f };
};