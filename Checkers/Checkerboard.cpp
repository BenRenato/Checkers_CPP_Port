#include "Checkerboard.h"
#include <iostream>

Checkerboard::Checkerboard() :board(8, std::vector<int>(8, 0))
{

}

Checkerboard::~Checkerboard() {

	std::vector<std::vector<int>>().swap(board);
	std::cout << "Death to the checkerboard.cpp!" << std::endl;

}
void Checkerboard::print_board() {

	std::cout << "print_board() start" << std::endl;

	std::vector<std::vector<int>>::iterator row;
	std::vector<int>::iterator col;

	for (row = this->board.begin(); row != this->board.end(); row++) {

		std::cout << std::endl;

		for (col = row->begin(); col != row->end(); col++) {

			std::cout << *col << " ";

		}

	}


	std::cout << std::endl << "print_board() end" << std::endl;
}