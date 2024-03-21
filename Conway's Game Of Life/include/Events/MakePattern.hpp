#ifndef MAKEPATTERN_HPP
#define MAKEPATTERN_HPP

#include "Event.hpp"
#include <fstream>
#include <iostream>

void RenderPattern(const std::string& filename,std::vector<std::vector<Cell>>& Cells, int nRows, int nCols,int GridSize,sf::Vector2f MousePos){
    std::ifstream fin(filename);
    std::string row;
    bool state;
    int i = MousePos.y/GridSize, j = MousePos.x/GridSize;
    while(std::getline(fin,row)){
        for(char symbol : row){
            if(symbol == '.'){state = false;}
            else if(symbol == 'O'){state = true;}
            Cells[j][i].alive = state ;
            j++;   
        }
        i++;
        j = MousePos.x/GridSize;
    }
}

#endif