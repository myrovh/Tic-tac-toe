/* 
 * File:   AI_Dumb.h
 * Author: myrovh
 *
 * Created on 17 March 2015, 2:32 PM
 */

#ifndef AI_DUMB_H
#define	AI_DUMB_H

#include "AI.h"

class Ai_Dumb : public Ai {
public:
    Ai_Dumb(char name, Board* game_board);
    bool make_move();
};



#endif	/* AI_DUMB_H */

