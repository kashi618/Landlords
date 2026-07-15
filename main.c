#include <stdio.h>
#include "graphics.h"

// Holds all information about a player
/*
typedef struct player {
    int score;
    int landlordWin;
    int landlordLose;
    int peasantWin;
    int peasantLose;
} Player;
*/

// Holds information about current game
/*
typedef struct game {
    int gameNumber;
    char date[8];
    char time[6];
    Player players[3];
    int bet;
    int bomb;
} Game;
*/

int main() {
    // TODO: Call read file function and store output as array of file pointers

    // Core program loop
    while (1) {
        // TODO: Display Title
        display_title();
        
        // Menu Loop
        while (1) {
            display_menu_options();
            char menuOption;
            //scanf("%c", &menuOption);
            menuOption = getchar();
            
            switch (menuOption) {
                // Start game
                case '1':
                    // TODO
                    printf("Start game");
                    break;
                    
                // View scores
                case '2':
                    // TODO
                    printf("View scores");
                    break;
                
                // Exit
                case '3':
                    // TODO: save files and exit
                    printf("Exit");
                    return 0;
                    break;

                default:
                    printf("Option not valid\n");
                    printf("Press any button to continue...");
                    while( getchar() != '\n' );
            }
            // TODO: Display Menu options
                // Start game (function)
                // view scores (function)
                // exit game (function)
                    // exit
        }
    }
}




