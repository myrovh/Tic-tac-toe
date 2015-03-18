/* 
 * File:   Ai_Player.h
 * Author: myrovh
 *
 * Created on 18 March 2015, 2:22 PM
 */

#ifndef AI_PLAYER_H
#define	AI_PLAYER_H

#include <iostream>
#include <sstream>
#include "AI.h"

class Ai_Player : public Ai {
public:
    Ai_Player(char name, Board* game_board);
    bool make_move();
};



#endif	/* AI_PLAYER_H */

