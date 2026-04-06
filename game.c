#include <stdio.h>  
#include "window.h"
#include "player.h"

int main() {
    player.x = 0;
    player.y = 0;
    player.hearts = 100;


    window();
    while (!WindowShouldClose()) {
        BeginDrawing();
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}