/* 
 * File:   board.h
 * Author: myrovh
 *
 * Created on 15 March 2015, 5:16 PM
 */

#ifndef BOARD_H
#define	BOARD_H

#include <array>
#include <utility>
#include <string>
#include <queue>
#include "Grid.h"

#define  BOARD_SIZE 3
#define BOARD_SQUARES 9
typedef std::queue<Grid> board_line;
typedef std::array<board_line, 8> board_line_array;

class Board {
private:
    Grid* game_board[BOARD_SQUARES];
    board_line_array line_list;
    char player_1;
    char player_2;
    char blank_space;

public:
    Board(char sig1, char sig2);
    Grid* get_grid(int x, int y);
    board_line_array get_line_list();
    bool is_game_over();
    std::string get_board_display();
};




#endif	/* BOARD_H */

