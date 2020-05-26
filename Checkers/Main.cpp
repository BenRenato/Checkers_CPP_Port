#include "Main.h"
#include "Game.h"
#include <iostream>

int main() {

	int choice = take_input();

	switch (choice)
	{

	case 1:
	{
		std::cout << "Selected option 1..." << std::endl;
		Game *game = new Game();
		game->print_board();
		std::cout << "Finished printing..." << std::endl;
		break;
	}
	default:
		std::cout << "Please enter a valid choice." << std::endl;
		break;
	}

	return 0;
}

int take_input() {

	int choice = 0;

	std::cout << "Please make a choice:\n1. Player vs Player" << std::endl;

	std::cin >> choice;

	return choice;

}