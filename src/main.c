#include <stdio.h>

#include "graphics.h"
#include "logic.h"


int main() {
    char menuOption; 
    
    // TODO: Call read file function and store output as array of file pointers
    

    /* Menu Loop */
    while (1) {
        display_title();
        
        while (1) {
            display_menu_option();
            menuOption = getchar();
             
            switch (menuOption) {

                /* Start Game */
                case '1':
                    // TODO
                    printf("TODO: Start game");
                    break;
                    

                /* View Scores */
                case '2':
                    // TODO
                    printf("TODO: View scores\n");
                    break;
            

                /* Create Player */
                case '3':
                    // TODO: create player
                    printf("TODO: Create Player\n");
                    break;


                /* Exit */
                case '4':
                    printf("Exit");
                    return 0;
                    break;


                /* Invalid Menu Selection */
                default:
                    printf("Option not valid\n");
                    printf("Press any button to continue...");
                    while( getchar() != '\n' );
            }

        }
    } /* END Menu Loop */
}




