#include <iostream>
#include <vector>
#include "tic_tac.hpp"
#include <bits/stdc++.h>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    printf("-------------------------Welcome to the Tic Tac Toe game-------------------------\n");
    printf("Now steps to play this game is simple:- \n-> Enter the position at which you want to mark your sign.\n\n");
    printf("Just in case for position reference of the table\n\n");
    printf("  1  |  2  |  3  \n");
    printf("------------------\n");
    printf("  4  |  5  |  6  \n");
    printf("------------------\n");
    printf("  7  |  8  |  9  \n");
    printf("\n Ready to play the game(1 for YES and 0 for no): ");
    int start;
    scanf("%d", &start);
    if (start == 1) {
        game_run();
    }
    else {    
        return 0;
    }
}