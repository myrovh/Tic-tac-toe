/* 
 * File:   AI.h
 * Author: myrovh
 *
 * Created on 17 March 2015, 2:25 PM
 */

#ifndef AI_H
#define	AI_H

#include <string>
#include "board.h"

class Ai {
protected:
    char name;
    Board* game_board;

    int get_line_count(int line_number, char symbol);

public:
    Ai(char ai_name, Board* game_board);
    char get_name();
    virtual bool make_move() = 0;
};

#endif	/* AI_H */