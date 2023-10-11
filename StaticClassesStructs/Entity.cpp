#include <iostream>

struct Entity
{
	static int x, y;

	static void PrintSum(int x, int y)
	{
		std::cout << x << " + " << y << " = " << x + y << '\n';
	}
};