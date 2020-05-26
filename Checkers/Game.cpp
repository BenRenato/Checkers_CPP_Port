#include "Game.h"
#include <iostream>

Game::Game()
{

	checkerboard = std::shared_ptr<Checkerboard>(new Checkerboard());

}


Game::~Game() {

	std::cout << "Destructor for Game.cpp" << std::endl;

}

void Game::run() {

	this->checkerboard->print_board();

}