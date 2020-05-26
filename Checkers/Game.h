#pragma once
#include <vector>
#include <string>
#include <memory>
#include "Checkerboard.h"

class Game{

public:

	Game();
	~Game();

	void run();

private:

	std::shared_ptr<Checkerboard> checkerboard;
	/*std::string player_1 = "P1";
	std::string player_2 = "P2";

	std::vector<int> piece_start;
	std::vector<int> piece_destination;

	std::string current_turn;

	bool initalise_agent;

	std::string game_type;
	*/
};


