#include "grid.h"
#include <iostream>

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
std::vector<Color> Grid::GetCellColors(){
    //gonna use ai to generate colors cuz im bad at this
    Color NavyBlue       = {150,  32,  64, 255}; // your base blue
    Color SteelBlue      = {70, 130, 180, 255}; // lighter complementary blue
    Color SkyBlue        = {135, 206, 235, 255}; // soft accent
    Color Teal           = {0,   128, 128, 255}; // green‑blue accent
    Color Coral          = {255, 127,  80, 255}; // warm contrast
    Color LightGray      = {211, 211, 211, 255}; // neutral light
    Color Charcoal       = {54,  69,  79, 255}; // dark neutral
    Color MustardYellow  = {218, 165,  32, 255}; // vibrant accent
    return{NavyBlue,SteelBlue,SkyBlue,Teal,Coral,LightGray,Charcoal,MustardYellow};
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