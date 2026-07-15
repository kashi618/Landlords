#include <stdio.h>
#include "graphics.h"


// TODO: Menu (Title)
    // Pretty titile/opening graphics
void display_title(void) {
    printf("#########################\n");
    printf("#         斗地主         #\n");
    printf("#########################\n");
}

// TODO: Menu (Main Menu)
    /*
    * 1) Start
    * 2) View scores
    * 3) Exit
    */
    // Each menu option calls respective function
void display_menu_options(void) {
    printf("\n\n");
    printf("  1) Start\n");
    printf("  2) Create player\n");
    printf("  3) View scores\n");
    printf("  4) Exit\n");
    printf("\n-> ");
}
