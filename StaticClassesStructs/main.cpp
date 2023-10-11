#include <iostream>
#include "Entity.cpp"

int Entity::x;
int Entity::y;

int main()
{
	Entity::x = 3;
	Entity::y = 2;
	Entity::PrintSum(Entity::x, Entity::y);
}