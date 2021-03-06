#include "AI_Dumb.h"

Ai_Dumb::Ai_Dumb(char name, Board* game_board) : Ai(name, game_board) {

}

bool Ai_Dumb::make_move() {
    bool solution_found = false;

    for(int x = 0; x < 3; x++) {
	for(int y = 0; y < 3 && solution_found == false; y++) {
	    char temp_grid = game_board->get_grid(x, y);
	    if(temp_grid = ' ') {
		solution_found = game_board->set_grid(x, y, name);
	    }
	}
    }

    return solution_found;
}
