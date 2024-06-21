#include <iostream>
#include <string>
#include <vector>

class Atom
{
public:
	//Getters and Setters
	//atomic number
	int getAtomicNumber() const
	{
		return m_atomicNumber;
	}

	void setAtomicNumber(int number)
	{
		m_atomicNumber = number;
	}

	//atomic name
	const std::string& getAtomicName() const
	{
		return m_atomicName;
	}

	void setName(const std::string& name)
	{
		m_atomicName = name;
	}

	//abbreviation
	const std::string& getAbbreviation() const
	{
		return m_abbreviation;
	}

	void setAbbreviation(const std::string& abbv)
	{
		m_abbreviation = abbv;
	}

	//atomic weight
	float getAtomicWeight() const
	{
		return m_atomicWeight;
	}

	void setAtomicWeight(float weight)
	{
		m_atomicWeight = weight;
	}
private:
	int m_atomicNumber{};
	std::string m_atomicName{};
	std::string m_abbreviation{};
	float m_atomicWeight{ 0.0f };
}

int main()
{
	std::vector<Atom> water;
	
	//using non-temporaries
	//first Hydrogen
	water.emplace_back(); 
	water.back().setName("Hydrogen"); 
	water.back().setAbbreviation("H");
	water.back().setAtomicNumber(1);
	water.back().setAtomicWeight(1.007f);
	//second Hydrogen
	water.emplace_back();
	water.back().setName("Hydrogen");
	water.back().setAbbreviation("H");
	water.back().setAtomicNumber(1);
	water.back().setAtomicWeight(1.007f);
	//Oxygen
	water.emplace_back();
	water.back().setName("Oxygen");
	water.back().setAbbreviation("O");
	water.back().setAtomicNumber(8);
	water.back().setAtomicWeight(16.00f);

	std::cout << "Atoms in Water molecule: " << water.size() << std::endl;
}
	/*Atom hydrogen{};
	hydrogen.setName("Hydrogen");
	hydrogen.setAbbreviation("H");
	hydrogen.setAtomicNumber(1);
	hydrogen.setAtomicWeight(1.007f);

	Atom oxygen{};
	oxygen.setName("Oxygen");
	oxygen.setAbbreviation("O");
	oxygen.setAtomicNumber(8);
	oxygen.setAtomicWeight(16.00f);*/

	//water.emplace_back(hydrogen);
	//water.emplace_back(hydrogen);
	//water.emplace_back(oxygen);

	//prints 3 
	//std::cout << water.size();

