#include "board.h"

Board::Board(char sig1, char sig2) {
    //set symbols for board
    player_1 = sig1;
    player_2 = sig2;
    blank_space = ' ';

    //build board_table
    for(int x = 0; x < 3; x++) {
	for(int y = 0; y < 3; y++) {
	    game_board[x][y] = blank_space;
	}
    }

    //set lines
}

char Board::get_grid(int x, int y) {
    if(x < BOARD_SIZE && x >= 0 && y < BOARD_SIZE && y >= 0) {
	return game_board[x][y];
    }

    return '\0';
}

bool Board::set_grid(int x, int y, char edit) {
    if(game_board[x][y] == blank_space) {
	if(edit == player_1 || edit == player_2) {
	    game_board[x][y] = edit;
	    return true;
	}
    }
    return false;
}

std::string Board::get_board_display() {
    std::string board_display;

    for(int x = 0; x < 3; x++) {
	for(int y = 0; y < 3; y++) {
	    board_display += game_board[x][y];
	}
	board_display += '\n';
    }
    board_display += '\n';

    return board_display;
}