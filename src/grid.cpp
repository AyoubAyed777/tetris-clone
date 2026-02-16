#include "grid.h"
#include <iostream>
#include "colors.h"
Grid::Grid(){
    Rows=20;
    Cols=10;
    CellSize=30;
    Initialize();
    colors=GetCellColors();

}

void Grid::Initialize(){
    for(int i=0;i<Rows;i++){
        for (int j = 0; j <Cols; j++)
        {
            grid[i][j]=0;
        }
        
    }
}
void Grid::print(){
    for(int i=0;i<Rows;i++){
        for (int j = 0; j <Cols; j++)
        {
            std::cout<<grid[i][j]<<" ";
        }
        std::cout<<std::endl;
        
    }
}


void Grid::Draw(){
    for(int i=0;i<Rows;i++){
        for (int j = 0; j <Cols; j++)
        {
            int CellValue=grid[i][j];
            DrawRectangle(j*CellSize+1,1+i*CellSize,CellSize-1,CellSize-1,colors[CellValue]);
            
        }
        
    }
}