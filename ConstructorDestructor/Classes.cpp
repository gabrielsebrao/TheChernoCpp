#include <iostream>

class Entity
{
public:
	Entity()
	{
		std::cout << "Create Entity!\n";
	}

	~Entity()
	{
		std::cout << "Destroy Entity!\n";
	}
};

void Print()
{
	Entity e;
}

int main()
{
	Print();
}