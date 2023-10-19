#include <iostream>

class Entity
{
public:
	float m_X, m_Y;

	void Move(const float x, const float y)
	{
		m_X += x;
		m_Y += y;
	}
};

class Player : public Entity
{
public:
	const char* m_Name;

	Player(float x, float y, const char* name)
	{
		m_Name = name;
		m_X = x;
		m_Y = y;
	}

	void Print()
	{
		std::cout << m_Name << '\n';
	}
};

int main()
{
	Player player(0, 0, "Gabriel");
	player.Print();
	player.Move(10, 10);
	std::cout << player.m_X << '\n';
	std::cout << player.m_Y << '\n';
}