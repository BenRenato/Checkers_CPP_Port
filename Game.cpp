#include "Game.h"
#include <iostream>

/*Game::Game() :checkerboard(8, std::vector<int>(8, 1))
{
	INITALISATION LIST, POSSIBLY BETTER FOR DEFAULT CONSTRUCTORS
}
*/

Game::Game() {

	this->checkerboard = std::vector<std::vector<int>>(8, std::vector<int>(8, 2));

}

void Game::print_board() {
		
	std::cout << "print_board() start" << std::endl;
	
	std::vector<std::vector<int>>::iterator row;
	std::vector<int>::iterator col;

	for (row = this->checkerboard.begin(); row != this->checkerboard.end(); row++) {

		std::cout << std::endl;
		
		for (col = row->begin(); col != row->end(); col++) {

			std::cout << *col << " ";

		}

	}


	std::cout << std::endl << "print_board() end" << std::endl;
}

Game::~Game() {

	std::vector<std::vector<int>>().swap(checkerboard);

}