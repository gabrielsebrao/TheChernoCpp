#pragma once
#include <iostream>
#include "Printable.cpp"

class Entity : public Printable
{
public:
	virtual std::string GetName()
	{
		return "Entity";
	}
	std::string GetClassName() override
	{
		return "Entity";
	}
};