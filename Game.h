#pragma once
#include <vector>

class Game{

public:

	Game();
	~Game();

	void print_board();


private:

	std::vector<std::vector<int>> checkerboard;

};


