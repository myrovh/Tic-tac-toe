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
    board_line temp = {pair_int(0,0), pair_int(0, 1), pair_int(0, 2)};
    line_list[0] = temp;
    temp = {pair_int(1, 0), pair_int(1, 1), pair_int(1, 2)};
    line_list[1] = temp;
    temp = {pair_int(2, 0), pair_int(2, 1), pair_int(2, 2)};
    line_list[2] = temp;
    temp = {pair_int(0, 0), pair_int(1, 0), pair_int(2, 0)};
    line_list[3] = temp;
    temp = {pair_int(0, 1), pair_int(1, 1), pair_int(2, 1)};
    line_list[4] = temp;
    temp = {pair_int(0, 2), pair_int(1, 2), pair_int(2, 2)};
    line_list[5] = temp;
    temp = {pair_int(0, 0), pair_int(1, 1), pair_int(2, 2)};
    line_list[6] = temp;
    temp = {pair_int(2, 0), pair_int(1, 1), pair_int(0, 2)};
    line_list[7] = temp;
}

char Board::get_grid(int x, int y) {
    if(x < BOARD_SIZE && x >= 0 && y < BOARD_SIZE && y >= 0) {
	return game_board[x][y];
    }

    return '\0';
}

board_line Board::get_line(int array_point) {
    return line_list[array_point];
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

    board_display += "+---+\n";
    for(int x = 0; x < 3; x++) {
	board_display += "|";
	for(int y = 0; y < 3; y++) {
	    board_display += game_board[x][y];
	}
	board_display += "|\n";
    }
    board_display += "+---+";
    board_display += '\n';

    return board_display;
}
