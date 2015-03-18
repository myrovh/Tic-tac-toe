#include "Ai_First_Pass.h"

Ai_First_Pass::Ai_First_Pass(char name, char opponent, Board* game_board) : Ai(name, game_board) {
    this->opponent = opponent;
}

bool Ai_First_Pass::make_move() {
    bool solution_found = false;
    int line_count = 0;

    //Check to see if game is over
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 3 || opponent_count == 3) {
	    return false;
	}

	line_count++;
    }

    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 2 && opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 0 && opponent_count == 2) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 1 && opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 1 && opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    return solution_found;
}