#include <iostream>
#include "Classes.h"

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << '\n';
}

void PrintClassName(Printable* obj)
{
	std::cout << obj->GetClassName() << '\n';
}

int main()
{
	Entity* e = new Entity();
	std::cout << e->GetName() << '\n';
	PrintName(e);

	Player* p = new Player("Gabriel");
	std::cout << p->GetName() << '\n';
	PrintName(p);

	PrintClassName(e);
	PrintClassName(p);

	std::cin.get();
}