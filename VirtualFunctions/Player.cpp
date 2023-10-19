#pragma once
#include <iostream>
#include "Entity.cpp"

class Player : public Entity
{
	std::string m_Name;
public:
	Player(const std::string name) : m_Name(name) 
	{
	}

	std::string GetName() override
	{
		return m_Name;
	}

	std::string GetClassName() override
	{
		return "Player";
	}
};