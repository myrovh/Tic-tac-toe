/* 
 * File:   Ai_First_Pass.h
 * Author: myrovh
 *
 * Created on 18 March 2015, 10:02 AM
 */

#ifndef AI_FIRST_PASS_H
#define	AI_FIRST_PASS_H

#include "AI.h"

class Ai_First_Pass : public Ai {
private:
    char opponent;

public:
    Ai_First_Pass(char name, char opponent, Board* game_board);
    bool make_move();
};

#endif	/* AI_FIRST_PASS_H */

