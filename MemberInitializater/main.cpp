#include <iostream>

class Entity
{
	std::string m_Name;
	int m_Power;

public:
	Entity()
		: m_Name("Unknow"), m_Power(NULL)
	{
	}

	Entity(const std::string& name) 
		: m_Name(name), m_Power(NULL)
	{
	}

	Entity(const std::string& name, const int& power) 
		: m_Name(name), m_Power(power)
	{
	}

	const std::string& GetName() const
	{
		return m_Name;
	}

	const int& GetPower() const
	{
		return m_Power;
	}
};

int main()
{
	Entity morgana("Morgana", 100);

	std::cout << "Entity's Name: " << morgana.GetName() << '\n';
	std::cout << "Entity's Power: " << morgana.GetPower() << '\n';
	
	std::cin.get();
}