#include "colors.h"
const Color  NavyBlue       = {150,  32,  64, 255}; // your base blue
   const Color SteelBlue      = {70, 130, 180, 255}; // lighter complementary blue
    const Color SkyBlue        = {135, 206, 235, 255}; // soft accent
    const Color Teal           = {0,   128, 128, 255}; // green‑blue accent
    const Color Coral          = {255, 127,  80, 255}; // warm contrast
    const Color LightGray      = {211, 211, 211, 255}; // neutral light
    const Color Charcoal       = {54,  69,  79, 255}; // dark neutral
    const  Color MustardYellow  = {218, 165,  32, 255}; // vibrant accent


    std::vector<Color> GetCellColors(){
        return{NavyBlue,SteelBlue,SkyBlue,Teal,Coral,LightGray,Charcoal,MustardYellow};
    }