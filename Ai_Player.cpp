#include "Ai_Player.h"

Ai_Player::Ai_Player(char name, Board* game_board) : Ai(name, game_board) {

}

bool Ai_Player::make_move() {
    int player_input_x;
    int player_input_y;
    
    std::cout << "Insert x location" << std::endl;
    std::cin >> player_input_x;
    std::cout << std::endl;
    std::cout << "Insert y location" << std::endl;
    std::cin >> player_input_y;
    std::cout << std::endl;

    player_input_x--;
    player_input_y--;

    if(player_input_x == -1) {
	return false;
    }
    else {
	return game_board->set_grid(player_input_x, player_input_y, name);
    }
}