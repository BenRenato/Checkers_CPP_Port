#pragma once
#include <vector>
#include "Piece.h"

class Checkerboard
{
public:

	Checkerboard();
	~Checkerboard();

	void print_board();
	void init_board();

private:

	std::vector<std::vector<Piece>> board;

	
};

