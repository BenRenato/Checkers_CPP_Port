#pragma once
#include <vector>

class Checkerboard
{
public:

	Checkerboard();
	~Checkerboard();

	void print_board();

private:

	std::vector<std::vector<int>> board;

	
};

