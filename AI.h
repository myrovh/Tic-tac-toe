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

public:
    Ai(char ai_name);
    char get_name();
    virtual bool make_move(Board* game_board) = 0;
};

#endif	/* AI_H */