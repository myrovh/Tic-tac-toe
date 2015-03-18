#include "AI.h"

Ai::Ai(char ai_signature, Board* game_board) {
    name = ai_signature;
    this->game_board = game_board;
}

int Ai::get_line_count(int line_number, char symbol) {
    board_line temp_line = game_board->get_line(line_number);
    int symbol_count = 0;

    for(int count = 0; count < 3; count++) {
	int x = temp_line[count].first;
	int y = temp_line[count].second;
	if(game_board->get_grid(x, y) == symbol) {
	    symbol_count++;
	}
    }

    return symbol_count;
}

char Ai::get_name() {
    return name;
}
