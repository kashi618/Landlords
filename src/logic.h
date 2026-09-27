#pragma once

// Holds all information about a player
typedef struct player {
    int score;         //
    int landlordWin;
    int landlordLose;
    int peasantWin;
    int peasantLose;
} Player;

// Holds information about current game
typedef struct game {
    char date[8];      // Date of game YYYY-MM-DD
    char time[6];      // Time of game HH:MM (24hr) 
    Player players[3]; // Array of the players playing
    int bet;           // How much to bet for landlord cards
    int bomb;          // How many bombs were played
} Game;

