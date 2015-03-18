#include "Ai_First_Pass.h"

Ai_First_Pass::Ai_First_Pass(char name, char opponent, Board* game_board) : Ai(name, game_board) {
    this->opponent = opponent;
}

//Algorithm will check each line for the best move, if it can't find it then it moves to the next best move. Until it finds a move that is possible to make. It will place itself on the first line that it finds with a valid move
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

    //If player can win this move
    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 2 && opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    //If opponent can win next move
    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 0 && opponent_count == 2) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    //If player can win in two moves
    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int player_count = get_line_count(line_count, name);
	int opponent_count = get_line_count(line_count, opponent);

	if(player_count == 1 && opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    //If line if free
    line_count = 0;
    while(solution_found == false && line_count < 8) {
	int opponent_count = get_line_count(line_count, opponent);

	if(opponent_count == 0) {
	    solution_found = set_move(line_count);
	}

	line_count++;
    }

    return solution_found;
}