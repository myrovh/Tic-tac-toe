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

#define  BOARD_SIZE 3
#define BOARD_SQUARES 9
typedef std::pair<int, int> pair_int;
typedef std::array<pair_int, 3> board_line;

class Board {
private:
    char game_board[3][3];
    board_line line_list[8];
    char player_1;
    char player_2;
    char blank_space;

public:
    Board(char sig1, char sig2);
    char get_grid(int x, int y);
    bool set_grid(int x, int y, char edit);
    board_line get_line(int array_point);
    bool is_game_over();
    std::string get_board_display();
};




#endif	/* BOARD_H */

