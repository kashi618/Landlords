#include <stdio.h>
#include "graphics.h"


/* 
 * Pretty titile/opening graphics
*/
void display_title(void) {
    printf("#########################\n");
    printf("#         斗地主        #\n");
    printf("#########################\n");
}


/* 
 * Displays available menu options
*/
void display_menu_option(void) {
    printf("\n\n");
    printf("  1) Start\n");
    printf("  2) Create player\n");
    printf("  3) View scores\n");
    printf("  4) Exit\n");
    printf("\n-> ");
}

