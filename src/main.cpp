#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"
int main() 
{   Color BackGroundColor={15,32,64, 255};
    InitWindow(300,600,"bch nwali ingenieur");//window l bch tkhdm feha l game
    SetTargetFPS(60);//ken nstaamlhech l pc bch ykhdmha bl max l ynajm 
    //struct Color={red,greem,blue,alha} kolhom ml 0--255
    Grid grid=Grid();
    grid.print();
    Oblock block=Oblock();
    while(WindowShouldClose()==false ){

        BeginDrawing();
        ClearBackground(BackGroundColor);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }

    CloseWindow();
}