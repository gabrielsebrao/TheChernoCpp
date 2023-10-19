#include <iostream>

struct Entity
{
	int m_Age;  

	Entity(const int age)
		: m_Age(age) {}

	Entity Add(const Entity& other) const
	{
		return Entity(m_Age + other.m_Age);
	}

	Entity Subt(const Entity& other) const
	{
		return Entity(m_Age - other.m_Age);
	}

	Entity operator+(const Entity& other) const
	{
		return Add(other);
	}

	Entity operator-(const Entity& other) const
	{
		return Subt(other);
	}

	bool operator==(const Entity& other) const
	{
		return m_Age == other.m_Age;
	}
};

std::ostream& operator<<(std::ostream& stream, const Entity& other)
{
	stream << other.m_Age;
	return stream;
}

int main()
{
	Entity a(10);
	Entity b(10);
	Entity c(0);

	//Simplificar esses casos
	//Entity totalAge = a.Add(b.Subt(c));

	Entity totalAB = a + b;
	Entity totalBC = b + c;
	Entity totalAC = a + c;

	Entity subtBAC = b - a - c;

	bool AisB = a == b;
	
	std::cout << "Age A: " << a << '\n';
	std::cout << "Age B: " << b << '\n';
	std::cout << "Age C: " << c << '\n';
	std::cout << "Total of age a + b: " << totalAB << '\n';
	std::cout << "Total of age b + c: " << totalBC << '\n';
	std::cout << "Total of age a + c: " << totalAC << '\n';
	std::cout << "Total of age b - a - c: " << subtBAC << '\n';

	switch (AisB) {
		case 0:
			std::cout << "Age A equals B? No." << '\n';
			break;
		case 1:
			std::cout << "Age A equals B? Yes." << '\n';
	}
		

}