#include "Piece.h"
#include <iostream>

Piece::Piece()
	:team(Team::empty)
{


}

Piece::~Piece() {

	std::cout << "Deleting piece..." << std::endl;
}

void Piece::set_team(Team team) {

	this->team = team;

}

Team Piece::get_team() {

	return this->team;
}

std::ostream& operator<<(std::ostream& output, const Piece& P) {

	if (P.team == Team::black) {
		output << "[B]";
	}
	else if (P.team == Team::white) {
		output << "[W]";
	}
	else {
		output << "[_]";
	}

	return output;
}