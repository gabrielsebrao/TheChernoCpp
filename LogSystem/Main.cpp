#include <iostream>
#include "Log.cpp"

const char* s_Variable = "Not static variable!";
void s_Static()
{
	std::cout << "That is not a static function!";
}

int main()
{
	Log log;

	log.Error("Hello!");
	std::cout << s_Variable << '\n';
	s_Static();
	std::cin.get();
}