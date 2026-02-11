#pragma once //bch l file yintegra mara barka fl prog = avoid duplication
#include <vector>
#include <raylib.h>

class Grid{
    private:
        int Rows,Cols,CellSize;
        std::vector<Color> colors;
        std::vector<Color> GetCellColors();
    public:
        Grid();
        void Initialize();
        int grid[20][10];
        void print();
        void Draw();


};
