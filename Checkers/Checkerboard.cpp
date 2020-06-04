#include "Checkerboard.h"
#include <iostream>

Checkerboard::Checkerboard() 
	:board(8, std::vector<Piece>(8))
{
	init_board();
}

Checkerboard::~Checkerboard() {

	std::vector<std::vector<Piece>>().swap(board);
	std::cout << "Death to the checkerboard.cpp!" << std::endl;

}


void Checkerboard::init_board() {

	for (uint32_t i = 0; i < board.size(); i++) {

		if (i % 2 == 0) {
			
			this->board[1][i].set_team(Team::white);

			this->board[5][i].set_team(Team::black);
			this->board[7][i].set_team(Team::black);
		}
		else {
			
			this->board[0][i].set_team(Team::white);
			this->board[2][i].set_team(Team::white);

			this->board[6][i].set_team(Team::black);
		}

	}

}
void Checkerboard::print_board() {

	std::cout << "print_board() start" << std::endl;

	std::vector<std::vector<Piece>>::iterator row;
	std::vector<Piece>::iterator col;

	for (row = this->board.begin(); row != this->board.end(); row++) {

		std::cout << std::endl;

		for (col = row->begin(); col != row->end(); col++) {

			std::cout << *col << " ";

		}

	}
	std::cout << std::endl << "print_board() end" << std::endl;
}