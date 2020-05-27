#pragma once
#include <string>
#include "Enums.h"
#include <ostream>

class Piece
{

public:

	Piece();
	~Piece();

	Team get_team();
	void set_team(Team team);

	friend std::ostream& operator<<(std::ostream& output, const Piece& P);


private:

	Team team;

};

