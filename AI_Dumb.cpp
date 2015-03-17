#include "AI_Dumb.h"

Ai_Dumb::Ai_Dumb(std::string name) : Ai(name) {

}

bool Ai_Dumb::make_move(Board* game_board) {
    bool solution_found = false;
    for(int x = 0; x < 3; x++) {
	for(int y = 0; y < 3 && solution_found == false; y++) {
	    Grid* temp_grid = game_board->get_grid(x, y);
	    if(temp_grid->grid_data == ' ') {
		temp_grid->grid_data = 'X'; //TODO fix to use function from board to set this
		solution_found = true;
	    }
	}
    }

    return solution_found;
}
