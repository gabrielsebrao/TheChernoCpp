#include <iostream>

class Entity
{
	int m_X, m_Y;
	mutable int temp = 0;

public: 
	int GetX() const 
	{
		temp += 1;
		return m_X;
	}

	int GetY() const 
	{
		temp += 1;
		return m_Y;
	}

	void SetX(int x)
	{
		m_X = x;
	}

	void SetY(int y)
	{
		m_Y = y;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << '\n';
	std::cout << e.GetY() << '\n';
}

int main()
{
	const int MAX_POWER = 90;

	const int* const ptr = new int(MAX_POWER);;

	//*ptr = 2; 
	//ptr = nullptr;

}