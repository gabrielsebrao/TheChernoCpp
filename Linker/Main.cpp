#include <iostream>
#include "Log.h"

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

int main()
{
	Player player;
	int xPower;
	int yPower;

	std::cout << "Choose player's x position: ";
	std::cin >> player.x;

	std::cout << "Choose player's y position: ";
	std::cin >> player.y;

	std::cout << "Choose player's speed: ";
	std::cin >> player.speed;

	std::cout << "What x power will player get? -> ";
	std::cin >> xPower;

	std::cout << "What y power will player get? -> ";
	std::cin >> yPower;

	player.Move(xPower, yPower);
	std::cout << "Now, player's is at (" << player.x << "," << player.y << ").";
}