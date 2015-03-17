#include "board.h"

Board::Board(char sig1, char sig2) {
    //set symbols for board
    player_1 = sig1;
    player_2 = sig2;
    blank_space = ' ';

    //build board_table
    int array_count = 0;
    for(int x = 0; x < 3; x++) {
	for(int y = 0; y < 3; y++) {
	    game_board[array_count] = new Grid(x, y, blank_space);
	    array_count++;
	}
    }

    //set lines
}

Grid* Board::get_grid(int x, int y) {
    for(int count = 0; count < BOARD_SQUARES; count++) {
	if(game_board[count]->x_location == x && game_board[count]->y_location == y) {
	    return game_board[count];
	}
    }

    return nullptr;
}

std::string Board::get_board_display() {
    std::string board_display;

    board_display += game_board[0]->grid_data;
    board_display += game_board[1]->grid_data;
    board_display += game_board[2]->grid_data;
    board_display += '\n';
    board_display += game_board[3]->grid_data;
    board_display += game_board[4]->grid_data;
    board_display += game_board[5]->grid_data;
    board_display += '\n';
    board_display += game_board[6]->grid_data;
    board_display += game_board[7]->grid_data;
    board_display += game_board[8]->grid_data;
    board_display += '\n';
    board_display += '\n';

    return board_display;
}