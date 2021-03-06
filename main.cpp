/* 
 * File:   main.cpp
 * Author: myrovh
 * Project: Tic Tack Toe AI System
 */

#include <iostream>
#include <string>
#include "board.h"
#include "AI.h"
#include "AI_Dumb.h"
#include "Ai_First_Pass.h"
#include "Ai_Player.h"


int main(int argc, char** argv) {

    //Load AI functions and board
    Board* board = new Board('X', 'O');
    //Ai* player_1 = new Ai_Player('X', board);
    Ai* player_1 = new Ai_First_Pass('X', 'O', board);
    Ai* player_2 = new Ai_First_Pass('O', 'X', board);

    std::cout << "Game is Starting" << std::endl;
    bool game_continue = true;

    do {
	std::cout << board->get_board_display() << std::endl;
	game_continue = player_1->make_move();
	game_continue = player_2->make_move();
    } while (game_continue);

    std::cout << "Game Has ended" << std::endl;
    std::cout << board->get_board_display() << std::endl;

    return 0;
}

/////////
//Board//
/////////
//Store board state
//store valid lines
//api functions for ai

///////////
//AI dumb//
///////////
//get board
//if no valid moves report false
//find first free space on board
//place piece on that board

/////////////
//AI Weight//
/////////////
//get board
//if no valid moves report false
//create weight table
//place piece on location with highest weight