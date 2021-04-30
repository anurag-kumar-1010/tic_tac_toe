#include <vector>
#include <iostream>
#include "tic_tac.hpp"
#include <algorithm>

//I am using 0 for player a and X for player b

int game_run() {
    //This the vector to which we pass input.
    std::vector<std::string> game_p = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    bool game_on = true;
    std::string user_t = "A";
    
    while (game_on) {
        int user_in;

        for (int i = 0; i < 9; i += 3) {
            std::cout << std::endl << " " + game_p[i] + "  |  " + game_p[i+1] + "  |  " + game_p[i+2] << std::endl;
            
            if (i < 6) {
                std::cout << "--------------\n";
            }    
        }
        //Check if any user has won
        //Thus variable check if the game has tie
        bool it = false;
        for (int i = 0; i < 9; i++) {
            if (game_p[i] == " ") {
                it = true;
            }
        }
        bool win_check = win(game_p);

        if (win_check) {
            std::cout << "\n\nPlayer " + user_t +  " won the game. Congrats!\n";
            game_on = false;
            return 0;
        }
        else if (!it) {
            std::cout << "Ohh, that's a tie. Nice game fellas.\n";
            game_on = false;
            return 0;
        }
        ;

        //This checks on which user turn it is
        if (user_t == "A") {
            user_t = "B";
        }
        else if (user_t == "B") {
            user_t = "A";
        }
        printf("\nEnter the position you want to make the sign: ");
        scanf("%1d", &user_in);

        if (user_t == "A" && user_in <= 9) {
            game_p[user_in - 1] = "0";
        }
        else if (user_t == "B" && user_in <= 9) {
            game_p[user_in -1] = "X";
        }
        
    }



}

bool win(std::vector<std::string> game_l) {
    bool what_r = false;
    for (int i = 0; i< 9; i += 3) {
        if (game_l[i] == game_l[i+1] && game_l[i] == game_l[i+2] && game_l[i] != " ") {
            what_r = true;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (game_l[i] == game_l[i+3] && game_l[i] == game_l[i+6] && game_l[i] != " ") {
            what_r = true;
        }
    }    
    for (int i = 0; i < 3; i+= 2) {
        if (i == 0 && (game_l[i] == game_l[i+4] && game_l[i] == game_l[i+8])&& game_l[i] != " ") {
            what_r = true;
        }
        else if (i==2 && (game_l[i] == game_l[i+4] && game_l[i] == game_l[i+6]) && game_l[i] != " ") {
            what_r = true;
        }
    }
    return what_r;
}
