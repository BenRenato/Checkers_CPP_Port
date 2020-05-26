#include "Game.h"

Game::Game()
{

	this->checkerboard = new Checkerboard();



}


Game::~Game() {

	delete this->checkerboard;

}

void Game::run() {

	this->checkerboard->print_board();

}