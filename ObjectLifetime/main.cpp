#include <iostream>

class Entity
{
public:

	int m_Age;

	Entity(const int age)
		: m_Age(age)
	{
		std::cout << "Created object!\n";
	}

	~Entity()
	{
		std::cout << "Destroyed object!\n";
	}
};

class DeleteEntity
{
	Entity const * m_Ptr;
public:
	DeleteEntity(Entity const & entity)
	{
		m_Ptr = &entity;
	}

	~DeleteEntity()
	{
		delete m_Ptr;
	}
};

int main()
{
	{
		Entity* e = new Entity(20);
		DeleteEntity e_dlt = *e;
		std::cout << e->m_Age << '\n';
	}
}