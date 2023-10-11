#include <iostream>
#include "Log.h"

void InitLog(const char* message)
{
	Log("Initialized Log");
}

void Log(const char* message)
{
	std::cout << message << '\n';
}