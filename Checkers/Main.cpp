#include "Main.h"
#include "Game.h"
#include <iostream>
#include <memory>

int main() {

	try {
		std::unique_ptr<int> choice(new int(take_input()));

		switch (*choice)
		{

		case 1:
		{
			std::cout << "Selected option 1..." << std::endl;

			std::unique_ptr<Game> game(new Game());
			game->run();

			std::cout << "Finished printing..." << std::endl;
			break;
		}
		default:
			std::cout << "Please enter a valid choice." << std::endl;
			break;
		}


		return 0;
	}
	catch (int e){
		std::cout << "Caught " << e << std::endl;
		return 0;
	}
}

int take_input() {

	std::unique_ptr<int> choice (new int(0));

	std::cout << "Please make a choice:\n1. Player vs Player" << std::endl;

	std::cin >> *choice;

	return *choice;

}