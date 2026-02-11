#include <raylib.h>
#include "grid.h"
int main() 
{   Color BackGroundColor={15,32,64, 255};
    InitWindow(300,600,"bch nwali ingenieur");//window l bch tkhdm feha l game
    SetTargetFPS(60);//ken nstaamlhech l pc bch ykhdmha bl max l ynajm 
    //struct Color={red,greem,blue,alha} kolhom ml 0--255
    Grid grid=Grid();
    grid.grid[0][0]=1;
    grid.grid[10][5]=7;
    grid.grid[6][7]=4;
    grid.print();
    while(WindowShouldClose()==false ){

        BeginDrawing();
        ClearBackground(BackGroundColor);
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();
}